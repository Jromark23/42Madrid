/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:03:58 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/17 16:44:05 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 		return (1);
// 	ft_putstr(argv[1]);
// 	return (0);
// }