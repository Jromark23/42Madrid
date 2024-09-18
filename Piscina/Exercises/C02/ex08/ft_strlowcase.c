/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:38:44 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/15 15:43:41 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
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
// 	printf("El resultado es: %s\n", ft_strlowcase(argv[1]));
// 	return (0);
// }
