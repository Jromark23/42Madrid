/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:06:30 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/25 18:04:53 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Changes n bytes from s to '\0'.
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	while (n--)
		*src++ = 0;
}
