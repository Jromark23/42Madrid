/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:34:21 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/25 16:18:47 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	abs;

	if (nb < 0)
	{
		ft_putchar('-');
		abs = -nb;
	}
	else
		abs = nb;
	if (abs > 9)
	{
		ft_putnbr(abs / 10);
		ft_putnbr(abs % 10);
	}
	else
		ft_putchar(abs + '0');
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
