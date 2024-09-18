/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@studiante42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:32:21 by joroman-          #+#    #+#             */
/*   Updated: 2024/07/25 15:40:17 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Return * to the final. 
char	*ft_strcpy2(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest + i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	return_length(int size, char **strs, int size_sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += size_sep;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*current_pos;
	int		i;

	if (size == 0)
	{
		res = (char *)malloc(1);
		if (res)
			*res = '\0';
		return (res);
	}
	res = malloc(return_length(size, strs, ft_strlen(sep)) + 1);
	if (!res)
		return (NULL);
	current_pos = res;
	i = 0;
	while (i < size)
	{
		current_pos = ft_strcpy2(current_pos, strs[i]);
		if (i < size - 1)
			current_pos = ft_strcpy2(current_pos, sep);
		i++;
	}
	*current_pos = '\0';
	return (res);
}

// int main(void)
// {
//     char *strs[] = {"Hola", "mundo", "esto", "es", "una", "prueba"};
//     char *sep = "XX";
//     int size = 6;

//     char *result = ft_strjoin(size, strs, sep);

//     if (result)
//     {
//         printf("Resultado: %s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Error al asignar memoria.\n");
//     }

//     return 0;
// }