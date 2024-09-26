/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:26:49 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/26 19:55:16 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Cut the characters found in 'set' from the beginning and the end of 's1'.
// Search if s1 char is in set with ft_strchr and copy strlcpy includes '\0'. 
// Returns a new string without the 'set' characters or 
// NULL if memory allocation fails.
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	first;
	size_t	last;
	size_t	res_size;

	first = 0;
	last = ft_strlen(s1);
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	while (last > first && ft_strchr(set, s1[last - 1]))
		last--;
	res_size = last - first + 1;
	result = malloc(res_size);
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[first], res_size);
	return (result);
}

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strtrim("HHXyHpruXHyebaHHH", "HyX");
// 	printf("%s\n", str);
// 	return (0);
// }
