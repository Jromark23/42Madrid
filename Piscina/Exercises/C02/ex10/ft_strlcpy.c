/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:57:42 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/15 17:41:27 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size < 1)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// int	main(void)
// {
// 	char	dest[60];
// 	char	*src;
// 	int		size;

// 	src = "mensaje de prueba al ej";
// 	size = 10;
// 	printf("%d\n", ft_strlcpy(dest, src, size));
// 	printf(".%s.\n\n", dest);
// 	printf("%lu\n", strlcpy(dest, src, size));
// 	printf(".%s.\n\n", dest);
// 	return (0);
// }