/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:34:43 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/17 11:14:21 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc < 4)
// 	{
// 		return (1);
// 	}

// 	unsigned int n = (unsigned int)atoi(argv[3]);
// 	printf("Resultado mio: %d\n", ft_strncmp(argv[1], argv[2], n));
// 	printf("Resultado original: %d\n", strncmp(argv[1], argv[2], n));
// 	return (0);
// }