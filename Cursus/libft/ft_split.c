/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:08:48 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/28 23:09:48 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Counts how many words can be extracted from "str"
static int	counter(const char *str, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (i);
}

// Frees all memory if something fail. Frees each word and then the main array.
static void	freall(char **string, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
	{
		free(string[i]);
		i++;
	}
	free(string);
}

// Creates a new word copying the chars from `str` between "first" and "last".
static char	*create(const char *str, int first, int last)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((last - first + 1));
	if (!word)
		return (0);
	while (first < last)
		word[i++] = str[first++];
	word[i] = '\0';
	return (word);
}

// Función que procesa una palabra extrayéndola de la cadena `s`, usando
// `index` como inicio de la palabra y `pos[0]` como su final. La almacena en
// `result[pos[1]]` y devuelve 1 si todo fue bien o 0 si falló.
// This function processes a word by extracting it from the string `s`,
// using `index` as the start and `pos[0]` as the end. It stores the word
// in `result[pos[1]]` and returns 1 if successful or 0 if it failed.
static int	process_word(char **result, const char *s, int index, size_t pos[2])
{
	result[pos[1]] = create(s, index, pos[0]);
	if (!result[pos[1]])
	{
		freall(result, pos[1]);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		index;
	size_t	pos[2];

	pos[0] = 0;
	pos[1] = 0;
	index = -1;
	result = malloc((counter(s, c) + 1) * sizeof(char *));
	if (!result)
		return (0);
	while (pos[0] <= ft_strlen(s))
	{
		if (s[pos[0]] != c && index < 0)
			index = pos[0];
		else if ((s[pos[0]] == c || pos[0] == ft_strlen(s)) && index >= 0)
		{
			if (process_word(result, s, index, pos) == 0)
				return (0);
			index = -1;
			pos[1]++;
		}
		pos[0]++;
	}
	result[pos[1]] = NULL;
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**result;
// 	char	*str = "Hola Mundo!, 42,Madrid,,,    , up to, you.";
// 	char	delimiter = ',';
// 	int		i;
// 	result = ft_split(str, delimiter);
// 	if (!result)
// 	{
// 		printf("Error");
// 		return (1);
// 	}
// 	printf("Prueba:  \"%s\"\n", str);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("Palabra %d: %s\n", i, result[i]);
// 		i++;
// 	}
// 	freall(result, i);
// 	return (0);
// }
