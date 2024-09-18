/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:31:50 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/14 18:53:48 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#define SIZE 4

int	check_top(int *board, int *numbers);
int	check_bottom(int *board, int *numbers);
int	check_left(int *board, int *numbers);
int	check_right(int *board, int *numbers);

void	print(int *board)
{
	char	buffer[SIZE * SIZE * 2 + SIZE + 1];
	int		index;
	int		row;
	int		col;

	index = 0;
	row = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
		{
			buffer[index++] = board[row * SIZE + col] + '0';
			if (col < SIZE - 1)
				buffer[index++] = ' ';
			col++;
		}
		buffer[index++] = '\n';
		row++;
	}
	buffer[index] = '\0';
	write(1, buffer, index);
}

int	check(int *board, int *numbers)
{
	if (!check_top(board, numbers) || !check_bottom(board, numbers)
		|| !check_left(board, numbers) || !check_right(board, numbers))
		return (0);
	else
		return (1);
}

int	valid(int *board, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (board[row * SIZE + i] == num || board[i * SIZE + col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int *board, int *numbers, int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == SIZE * SIZE)
		return (check(board, numbers));
	row = pos / SIZE;
	col = pos % SIZE;
	num = 1;
	while (num <= SIZE)
	{
		if (valid(board, row, col, num))
		{
			board[row * SIZE + col] = num;
			if (solve(board, numbers, pos + 1))
				return (1);
			board[row * SIZE + col] = 0;
		}
		num++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	*numbers;
	int	*board;
	int	i;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	numbers = (int *)malloc(SIZE * SIZE * sizeof(int));
	i = -1;
	while (++i < SIZE * SIZE)
		numbers[i] = argv[1][i * 2] - '0';
	board = (int *)malloc(SIZE * SIZE * sizeof(int));
	i = -1;
	while (++i < SIZE * SIZE)
		board[i] = 0;
	if (solve(board, numbers, 0))
		print(board);
	else
		write(1, "Error\n", 6);
	free(numbers);
	free(board);
	return (0);
}
