/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:21:10 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/11 13:50:29 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
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
// 	printf("El resultado es: %d\n", ft_str_is_lowercase(argv[1]));
// 	return (0);
// }
