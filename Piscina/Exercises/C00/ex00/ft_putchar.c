/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:13:23 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/05 14:53:27 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('c');
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
