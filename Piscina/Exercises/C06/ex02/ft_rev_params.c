/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:21:21 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/18 18:35:53 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	args_number;
	int	i;

	args_number = argc;
	while (--args_number > 0)
	{
		i = -1;
		while (argv[args_number][++i] != '\0')
			write (1, &argv[args_number][i], 1);
		write (1, "\n", 1);
	}
	return (0);
}
