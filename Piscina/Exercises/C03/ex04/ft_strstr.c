/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:22:03 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/18 19:22:42 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char *)(str + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc != 3)
// 	{
// 		return (1);
// 	}
// 	printf("Resultado mio: %s\n", ft_strstr(argv[1], argv[2]));
// 	printf("Resultado original: %s\n", strstr(argv[1], argv[2]));
// 	return (0);
// }
