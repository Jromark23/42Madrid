/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:33:11 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/25 18:09:41 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Searches for the character 'c' in the string 's' starting from the end.
// Returns a pointer to the last occurrence of 'c' or NULL if not found.
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <stddef.h>
// #include <string.h>
//
// int main(void)
// {
//     char s1[] = "Hello world! que tal";
//     char s2[] = "world";
//     char s3[] = "";
//     char s4[] = "world!";
//
//     // Caso 5: s2 no está en s1
// 	printf("Caso 5: %s\n", ft_strrchr(s1, 'l')
// ? ft_strrchr(s1, 'l') : "No encontrado");
//     printf("Caso 5: %s\n", strrchr(s1, 'l') 
//? strrchr(s1, 'l') : "No encontrado");
//
//     return 0;
// }