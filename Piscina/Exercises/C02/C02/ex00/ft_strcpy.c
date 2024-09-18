/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:54:39 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/15 15:42:48 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*first;

	first = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (first);
}

// int	main(void)
// {
// 	char	src[] = "Hola, mundoafjasdfjksvadjkfadskjfashkjjkkjasddjkf!";
// 	char	dest[20];
// 	ft_strcpy(dest, src);

// 	printf("Cadena copiada: %s\n", src);
// 	printf("Puntero devuelto: %s\n", dest);
// 	return (0);
// }
