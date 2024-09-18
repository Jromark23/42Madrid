/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:42:13 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/18 17:25:27 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = (ft_strlen(dest));
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

// int	main(int argc, char *argv[])
// {
// 	unsigned int	n = (unsigned int)atoi(argv[3]);
// 	if (argc < 4)
// 	{
// 		return (1);
// 	}
// 	printf("Resultado mio: %s\n", ft_strncat(argv[1], argv[2], n));
// 	printf("Resultado original: %s\n", strncat(argv[1], argv[2], n));
// 	return (0);
// }
