/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:54:36 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/24 20:21:17 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

int	check(char *base)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		x = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[x] != '\0')
		{
			if (base[i] == base[x])
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	nbr_final[100];
	int	i;

	i = 0;
	size = 0;
	if (check(base) == 1 && (nbr != 0 || ft_putchar(base[0]) != 0))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size])
			size++;
		while (nbr)
		{
			nbr_final[i] = nbr % size;
			nbr = nbr / size;
			++i;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
}

int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	return (0);
}
