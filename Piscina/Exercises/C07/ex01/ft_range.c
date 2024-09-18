/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:36:07 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/25 00:45:25 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	result = (int *)malloc((max - min) * sizeof(int));
	if (!result)
		return (0);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

// int	main(int argc, char *argv[])
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	i;

// 	if (argc != 3)
// 		return (1);

// 	min = atoi(argv[1]);
// 	max = atoi(argv[2]);
// 	range = ft_range(min, max);

// 	printf("Rango: ");
// 	for (i = 0; i < (max - min); i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	printf("\n");

// 	free(range);
// 	return (0);
// }
