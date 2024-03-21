/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghibell <mghibell@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:44:11 by mghibell          #+#    #+#             */
/*   Updated: 2024/03/20 22:44:11 by mghibell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void		*ft_memset(void *k, int b, size_t n);
void		ft_bzero(void *g, size_t n);
void		*ft_memcpy(void *d, const void *s, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *c, int i, size_t s);
int			ft_memcmp(const void *p1, const void *p2, size_t s);
size_t		ft_strlen(const char *s);
int			ft_isdigit(int c);
int			ft_isalnum(int k);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int k);
int			ft_tolower(int k);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *c, int i);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlcpy(char *to, const char *from, size_t size);
size_t		ft_strlcat(char *to, const char *from, size_t destsize);
char		*ft_strnstr(const char *stack, const char *needle, size_t len);
int			ft_atoi(const char *t);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *c);
char		*ft_substr(char const *c, unsigned int start, size_t len);
char		*ft_strjoin(const char *s1, const char *s2);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_strtrim(char const *s1, char const *set);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);

#endif