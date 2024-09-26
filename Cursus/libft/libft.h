/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:54:07 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/26 19:54:56 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Protección contra inclusiones múltiples
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

void		*ft_memset(void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strncmp(char *s1, char *s2, size_t n);
int			ft_atoi(const char *nptr);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
char		*strdup(const char *s);
char		*ft_itoa(int n);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strjoin(char const *s1, char const *s2);

size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);

// Aplica la función 'f' a cada carácter de la cadena 's' y crea
// una nueva cadena con el resultado.
// Devuelve la nueva cadena o NULL si falla la asignación.
// Applies the function 'f' to each character of the string 's'
// and creates a new string with the result.
// Returns the new string or NULL if memory allocation fails.
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// Divide la cadena 's' en un arreglo de cadenas utilizando el carácter
// 'c' como delimitador.
// Devuelve un array de cadenas (terminado en NULL) o NULL si falla la
// asignación.
// Splits the string 's' into an array of strings using the character
// 'c' as a delimiter.
// Returns an array of strings (NULL-terminated) or NULL if memory
// allocation fails.
char		**ft_split(char const *s, char c);

// Aplica la función 'f' a cada carácter de la cadena 's',
// modificando la cadena directamente.
// No devuelve nada, simplemente modifica 's' in situ.
// Applies the function 'f' to each character of the string 's',
// modifying the string directly.
// Does not return anything, just modifies 's' in place.
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
#endif  // LIBFT_H
