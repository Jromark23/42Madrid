/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:20:37 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/14 18:22:15 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#define SIZE 4

int	check_top(int *board, int *numbers)
{
	int	col;
	int	row;
	int	box_counter;
	int	max_height;
	int	valid;

	valid = 1;
	col = -1;
	while (++col < SIZE)
	{
		max_height = 0;
		box_counter = 0;
		row = -1;
		while (++row < SIZE)
		{
			if (board[row * SIZE + col] > max_height)
			{
				max_height = board[row * SIZE + col];
				box_counter++;
			}
		}
		if (box_counter != numbers[col])
			valid = 0;
	}
	return (valid);
}

int	check_bottom(int *board, int *numbers)
{
	int	col;
	int	row;
	int	box_counter;
	int	max_height;
	int	valid;

	valid = 1;
	col = -1;
	while (++col < SIZE)
	{
		max_height = 0;
		box_counter = 0;
		row = SIZE;
		while (--row >= 0)
		{
			if (board[row * SIZE + col] > max_height)
			{
				max_height = board[row * SIZE + col];
				box_counter++;
			}
		}
		if (box_counter != numbers[SIZE + col])
			valid = 0;
	}
	return (valid);
}

int	check_left(int *board, int *numbers)
{
	int	row;
	int	col;
	int	box_counter;
	int	max_height;
	int	valid;

	valid = 1;
	row = -1;
	while (++row < SIZE)
	{
		max_height = 0;
		box_counter = 0;
		col = -1;
		while (++col < SIZE)
		{
			if (board[row * SIZE + col] > max_height)
			{
				max_height = board[row * SIZE + col];
				box_counter++;
			}
		}
		if (box_counter != numbers[2 * SIZE + row])
			valid = 0;
	}
	return (valid);
}

int	check_right(int *board, int *numbers)
{
	int	row;
	int	col;
	int	box_counter;
	int	max_height;
	int	valid;

	valid = 1;
	row = -1;
	while (++row < SIZE)
	{
		max_height = 0;
		box_counter = 0;
		col = SIZE;
		while (--col >= 0)
		{
			if (board[row * SIZE + col] > max_height)
			{
				max_height = board[row * SIZE + col];
				box_counter++;
			}
		}
		if (box_counter != numbers[3 * SIZE + row])
			valid = 0;
	}
	return (valid);
}
