/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:03:48 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/25 17:43:05 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Busca el carácter 'c' en los primeros 'n' bytes del bloque de memoria 's'.
// Searches the character 'c' in the first 'n' bytes of the memory block 's'.
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	while (n--)
		if (src[i++] == (unsigned char)c)
			return (&src[--i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
//     char str[] = "Hola, mundo!";
//     size_t n = strlen(str);
//
//     char *result = ft_memchr(str, 'w', n);
// 	char *result2 = memchr(str, 'w', n);
//
//     if (result != NULL)
//         printf("encontrado\n");
//     else
//         printf("no encontrado.\n");
// 	if (result2 != NULL)
//         printf("encontrado\n");
//     else
//         printf("no encontrado.\n");
//     return (0);
// }