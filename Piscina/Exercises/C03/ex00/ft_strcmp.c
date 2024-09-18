/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:10:27 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/18 14:43:40 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc < 3)
// 	{
// 		return (1);
// 	}
	// printf("Resultado mio: %d\n", ft_strcmp(argv[1], argv[2]));
	// printf("Resultado original: %d\n", strcmp(argv[1], argv[2]));
// 	return (0);
// }
