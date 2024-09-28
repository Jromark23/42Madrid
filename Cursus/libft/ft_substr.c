/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:19:29 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/28 20:18:11 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Revisar que hacer cuando sale de la cadena, NULL o Cadena vacia?? 
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	len_s;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (NULL);
	if (len > len_s - start)
		len = len_s - start;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (s[start] != '\0' && len-- > 0)
	{
		result[i++] = s[start++];
	}
	result[i] = '\0';
	return (result);
}

// int main()
// {
//     char *str = "Hello, World!";
//     char *substr = ft_substr(str, 7, 5); //"World"
//     printf("Substring: %s\n", substr);
//     free(substr);

//     substr = ft_substr(str, 0, 5); // "Hello"
//     printf("Substring: %s\n", substr);
//     free(substr);

//     substr = ft_substr(str, 14, 5); // vacía
//     printf("Substring: %s\n", substr);
//     free(substr);

//     return (0);
// }