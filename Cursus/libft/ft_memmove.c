/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:59:06 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/29 22:43:23 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// We compare if the memory area is before or after. If it's before
// we copy normally, if not, we need to copy from the end.
// We need to decrement the pointers first to copy correctly.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*aux_src;
	unsigned char		*aux_dst;

	if (!dest && !src)
		return (NULL);
	aux_src = (const unsigned char *)src;
	aux_dst = (unsigned char *)dest;
	if (aux_dst < aux_src)
	{
		while (n--)
			*aux_dst++ = *aux_src++;
	}
	else
	{
		aux_src += n;
		aux_dst += n;
		while (n--)
			*(--aux_dst) = *(--aux_src);
	}
	return (dest);
}
