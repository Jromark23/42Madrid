/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:41:01 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/25 18:02:29 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fills the first 'n' bytes of 's' with the value 'c'
// Returns a pointer to the memory block 's'.
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *)s)[i] = (unsigned char)c;
	return (s);
}

// It is necessary to use unsigned char to avoid 
// problems with signed values or when filling 
// memory in order to be able to enter in memory
// byte by byte. With C only need the value.
//
// #include <stdio.h>
// #include <string.h>
//
// int main() {
//     char str[] = "Hola amigow";
//     char str2[] = "Hola amigow";
//    
//     memset(str, 'X', 6);   
//     ft_memset(str2, 'X', 6);
//    
//     printf("original %s\n", str);
//     printf("copia %s\n", str2);
// 	write(1, str, sizeof(str));
// 	write(1, str, 1);
//     return 0;
// }
