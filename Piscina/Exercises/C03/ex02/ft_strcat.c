/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:11:38 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/20 11:11:46 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = (ft_strlen(dest));
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

// modificar la salida del original para quee haya memoria 
// int	main(int argc, char *argv[])
// {
// 	if (argc != 3)
// 	{
// 		return (1);
// 	}
// 	printf("Resultado mio: %s\n", ft_strcat(argv[1], argv[2]));
// 	printf("Resultado original: %s\n", strcat(argv[1], argv[2]));
// 	return (0);
// }
