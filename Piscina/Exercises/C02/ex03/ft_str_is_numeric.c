/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:02:14 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/11 13:18:11 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc < 2)
// 	{
// 		return (1);
// 	}
// 	printf("El resultado es: %d\n", ft_str_is_numeric(argv[1]));
// 	return (0);
// }
