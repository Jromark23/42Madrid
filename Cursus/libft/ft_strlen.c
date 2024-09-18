/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:46:57 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/18 18:54:47 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	main(int argc, char *argv[])
{
	if (argc < 1)
		printf("No se proporcionaron argumentos.\n");

	printf("Personal -> %zu\n", ft_strlen(argv[1]));
	printf("Original -> %zu\n", strlen(argv[1]));
}
