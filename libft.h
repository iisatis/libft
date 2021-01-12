/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:42:59 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/12 18:36:33 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void			*ft_memset(void *p, int value, size_t size);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t size);
void			*ft_memccpy(void *dest, const void *src, int ch, size_t size);
void			*ft_memmove (void *dest, const void *src, size_t size);
void			*ft_memchr (const void *mem_block, int ch, size_t size);
int				ft_memcmp (const void *p1, const void *p2, size_t size);
size_t			ft_strlen(char *str);
int				ft_isalpha(int a);
int				ft_isdigit(int a);
int				ft_isalnum(int a);
int				ft_isascii(int a);
int				ft_isprint(int a);
int				ft_toupper(int a);
int				ft_tolower(int a);
char			*ft_strchr(const char *str, int chr);
char			*ft_strrchr(const char *str, int chr);
int				ft_strncmp(const char *s1, const char *s2, size_t len);
size_t			ft_strlcpy(char *dest, const char *src, size_t len);
size_t			ft_strlcat(char *dest, const char *src, size_t len);
char			*ft_strnstr(const char *str, const char *find, size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t elem_count, size_t elem_size);
char			*ft_strdup(const char *src);
char			*ft_strndup(const char *src, unsigned int len);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			**ft_split(char const *s, char c);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
#endif
