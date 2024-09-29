/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:33:11 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/29 20:30:53 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Searches for the character 'c' in the string 's' starting from the end.
// Returns a pointer to the last occurrence of 'c' or NULL if not found.
char	*ft_strrchr(const char *s, int c)
{
	const char	*aux;

	aux = s;
	while (*s)
		s++;
	while (s >= aux)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
