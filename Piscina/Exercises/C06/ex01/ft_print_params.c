/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:49:07 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/24 23:10:07 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	args_number;
	int	i;

	args_number = 0;
	while (++args_number < argc)
	{
		i = -1;
		while (argv[args_number][++i] != '\0')
			write (1, &argv[args_number][i], 1);
		write (1, "\n", 1);
	}
	return (0);
}
