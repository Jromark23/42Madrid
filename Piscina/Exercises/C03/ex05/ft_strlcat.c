/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:42:26 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/21 11:53:22 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	i = 0;
	d_len = 0;
	s_len = 0;
	while (d_len < size && dest[d_len] != '\0')
		d_len++;
	while (src[s_len] != '\0')
		s_len++;
	if (size <= d_len)
		return (size + s_len);
	while (src[i] != '\0' && (d_len + i) < (size - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	if (d_len < size)
		dest[d_len + i] = '\0';
	return (d_len + s_len);
}

int	main(void)
{
	char dest[20] = "Hello";
	const char	*src = " World";
	size_t			size = sizeof(dest);
	size_t			result = strlcat(dest, src, size);

	printf("Concatenated string: %s\n", dest);
	printf("Total length: %zu\n", result);
	printf("-->%zu", strlcat(dest, src, size));

	return (0);
}
