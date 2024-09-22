/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joroman- <joroman-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:54:07 by joroman-          #+#    #+#             */
/*   Updated: 2024/09/21 18:54:34 by joroman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Protección contra inclusiones múltiples
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void		*ft_memset(void *s, int c, size_t n);
void 		*ft_memcpy(void *dest, const void *src, size_t n);
void 		*ft_memmove(void *dest, const void *src, size_t n);
void 		*ft_memchr(const void *s, int c, size_t n);

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int 		ft_memcmp(const void *s1, const void *s2, size_t n);
int         ft_strncmp(char *s1, char *s2, size_t n);

char		*ft_strchr(const char *s, int c);
char    	*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);

size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);

#endif  // LIBFT_H
