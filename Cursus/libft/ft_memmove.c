/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:59:06 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/21 19:52:43 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*aux_src;
	unsigned char		*aux_dst;

	aux_src = (const unsigned char *)src;
	aux_dst = (unsigned char *)dest;

	if (aux_dst < aux_src)
	{
		while (n--)
			*aux_dst++ = *aux_src++;
	}
	else 
	{
		while (n--)
		{
			*aux_dst = *aux_src;
			aux_dst++;
			aux_src++;
		}
	}
	return (dest);
}
