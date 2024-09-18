/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:32:37 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/18 16:51:50 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int		x;

	x = 0;
	while ((x * x) < nb)
		x++;
	if ((x * x) == nb)
		return (x);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("16: %d\n", ft_sqrt(16));
// 	printf("25: %d\n", ft_sqrt(25));
// 	printf("46: %d\n", ft_sqrt(26));
// 	printf("-4: %d\n", ft_sqrt(-4));
// 	return (0);
// }
