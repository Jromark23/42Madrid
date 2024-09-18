/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:06:08 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/15 11:47:57 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
		count++;
	}
	return (str - count);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc < 2)
// 	{
// 		return (1);
// 	}
// 	printf("El resultado es: %s\n", ft_strupcase(argv[1]));
// 	return (0);
// }
