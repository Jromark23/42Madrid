/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:49:39 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/18 19:25:02 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

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
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (++i < argc - 1)
// 	{
// 		j = 0;
// 		while (++j < argc - i)
// 		{
// 			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
// 				ft_swap(&argv[j], &argv[j + 1]);
// 		}
// 	}
// 	i = 0;
// 	while (++i < argc)
// 	{
// 		j = 0;
// 		while (argv[i][j] != '\0')
// 		{
// 			write(1, &argv[i][j], 1);
// 			j++;
// 		}
// 		write(1, "\n", 1);
// 	}
// 	return (0);
// }
