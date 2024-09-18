/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:56:14 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/24 22:29:22 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

// int	main(int argc, char *argv[])
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	size;
// 	int	i;

// 	if (argc != 3)
// 	{
// 		printf("Uso: %s <min> <max>\n", argv[0]);
// 		return 1;
// 	}
// 	min = atoi(argv[1]);
// 	max = atoi(argv[2]);
// 	size = ft_ultimate_range(&range, min, max);
// 	if (size == -1)
// 		return (1);
// 	printf("Tamaño: %d): ", size);
// 	for (i = 0; i < size; i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	printf("\n");
// 	free(range); 
// 	return (0);
// }