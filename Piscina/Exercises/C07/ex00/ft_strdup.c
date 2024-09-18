/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:19:45 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/25 15:40:02 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*new;
	int		i;

	len = ft_strlen(src) + 1;
	new = (char *)malloc(len * sizeof(char));
	if (!new)
		return (0);
	i = -1;
	while (src[++i])
		new[i] = src[i];
	new[i] = 0;
	return (new);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 		return (1);
// 	char *copy = ft_strdup(argv[1]);
// 	printf("copia: %s", copy);
// 	return (0);
// }
