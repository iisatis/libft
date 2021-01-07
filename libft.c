/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:29:16 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/07 15:29:16 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	*ft_memset(void *p, int value, size_t size)
{
	int i;
	
	i = -1;
	while (++i < size)
		p[i] = value;
	return (p);
}

void	ft_bzero(void *s, size_t n)
{
	int i;

	i = -1;
	while (++i < n)
		s[i] = '\0';
}

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	int i;

	i = -1;
	while (++i < size)
		dest[i] = src[i];
	return (dest);
}

void	*ft_memccpy(void *dest, const void *src, int ch, size_t size)
{
	int i;
	int *p;

	i = -1;
	p = NULL;
	while (++i < size && src[i] != ch)
		dest[i] = src[i];
	if (src[i] == ch)
	{
		dest[i] = src[i];
		*p = &dest[i];
	}
	return (p);
}

void	*ft_memmove (void *dest, const void *src, size_t size)
{
	int i;
	void temp[size];

	i = -1;
	while (++i < size)
		temp[i] = src[i];
	i = -1;
    while (++i < size)
        dest[i] = temp[i];
    return (dest);
}

void    *ft_memchr (const void *mem_block, int ch, size_t size)
{
    int i;
    int *p;

    i = -1;
    p = NULL;
    while (++i < size)
        if (mem_block[i] == ch)
        {
            *p = &mem_block[i];
            return (p);
        }
    return (p);
}

int     ft_memcmp (const void *p1, const void *p2, size_t size)
{
    int i;
    int r;

    i = 0;
    r = 0;
    while (p1[i] == p2[i] && i < size)
        i++;
    if (p1[i] < p2[i] && i < size)
        r = -1;
    else if (p1[i] > p2[i] && i < size)
        r = 1;
    return r;
}

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
            i++;
    return (i);
}

int     ft_isalpha(int a)
{
    if (a >= 'a' && a <= 'z')
        return 2;
    else if (a >= 'A' && a <= 'Z')
        return 1;
    else
        return 0;
}

int     ft_isdigit(int a)
{
    if (a >= '0' && a <= '9')
        return 1;
    else
        return 0;
}

int     ft_isalnum(int a)
{
    if ((a >= 'a' && a <= 'z')
        || (a >= 'A' && a <= 'Z')
        || (a >= '0' && a <= '9'))
        return 1;
    else
        return 0;
}

int     ft_isascii(int a)
{
    if (a >= 0 && a <= 0177)
        return 1;
    else
        return 0;
}

int     ft_isprint(int a)
{
    if (a >= 32 && a <= 126)
        return 1;
    else
        return 0;
}

int     ft_toupper(int a)
{
    if (a >= 'a' && a <= 'z')
        a -= 32;
    return a;
}

int     ft_tolower(int a)
{
    if (a >= 'A' && a <= 'Z')
        a += 32;
    return a;
}

char    *ft_strchr(const char *str, int chr)
{
    while (*str)
    {
        if (*str == chr)
            return str;
        str++;
    }
    return (NULL);
}

char    *ft_strrchr(const char *str, int chr)
{
    int i;

    i = 0;
    while (*str)
    {
        if (*str == chr)
            i++;
        str++;
    }
    if (i == 0)
        return (NULL);
    else
    {
        while (*str != chr)
            str--;
        return str;
    }
}

int     ft_strncmp(const char *first_str, const char *second_str, size_t lgt)
{
    int i;
    int r;

    i = 0;
    r = 0;
    while (first_str[i] && (first_str[i] == second_str[i]) && i < lgt)
        i++;
    if (first_str[i] < second_str[i])
        r = -1;
    else if (first_str[i] > second_str[i])
        r = 1;
    return r;
}


int     ft_strlcpy(char *dest, const char *src, int lgt)
{
    int i;
    int n;

    i = -1;
    n = ft_strlen(src);
    while (src[++i] && i < (lgt - 1))
        dest[i] = src[i];
    dest[i] = '\0';
    return n;
}

int     ft_strlcat(char *dest, const char *src, int lgt)
{
    int dest_size;
    int i;

    dest_size = ft_strlen(src) + ft_strlen(dest);
    i = 0;
    while (i < (lgt - 1) && dest[i])
        i++;
    while (i < (lgt - 1) && *src)
    {
        dest[i] = *src;
        i++;
        src++;
    }
    dest[i] = '\0';
    return dest_size;
}

char    *ft_strnstr(const char *str, const char *find, unsigned int lgt)
{
	unsigned int i;

	if (*find == '\0' || lgt == 0)
		return (str);
	while (*str)
	{
		if (*str == *find)
		{
			i = 1;

			while (str[i] == find[i] && lgt > i)
                i++;
            if (find[i] == '\0' || i == lgt)
            return (str);
		}
        str++;
	}
	return (NULL);
}

int     ft_atoi(const char *str)
{
    long n;
    int np;

    n = 0;
    np = 1;
    while ((*str == ' ') || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
    {
        np *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        n *= 10;
        n += (*str - '0');
        str++;
    }
    n *= np;
    return n;
}

/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

void    *ft_calloc(size_t elem_count, size_t elem_size)
{
	char *dest;

	if (!(dest = malloc(elem_size * elem_count)))
		return (NULL);
	ft_memset(dest, 0, elem_count * elem_size);
	return (dest);
}

/*///////////////////////////////////////////// A TESTER /////////////////////////////////////////////////////////////////////*/

char *ft_strdup(const char *src)
{
    int i;
    char *dest;
    int size;

    i = -1;
    size = ft_strlen(src);
    if(!(dest = malloc(size * sizeof(char))) || size = 0)
        return (NULL); 
    while (src[++i])
        src[i] = dest[i];
    return (dest);
}

/*/////////////////////////////////////////////// PART 2 //////////////////////////////////////////////////////////////////*/


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    int size;
    char *dest;

    i = -1;
    while (*s != start)
        s++;
    size = ft_strlen(s);
    if(!(dest = malloc(size * sizeof(char)))) 
        return (NULL);
    while (s[++i] && i < size)
        dest[i] = s[i];
    dest[size] = '/0';
    return (dest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int size;
    char *dest;

    i = -1;
    size = (ft_strlen(s1) + ft_strlen(s2)); 
    if(!(dest = malloc(size * sizeof(char)))) 
        return (NULL);
    while (*s1)
    {
        dest[++i] = *s1;
        s1++;
    }
    while (*s2)
    {
        dest[++i] = *s2;
        s2++;
    }
    dest[++i] = '/0';
return (dest);
}

/*///////////////////////////////////////////////////////////////////////////////////////////////////////////*/

int		char_count(char const *str, char const *set)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (*str)
	{
		while(set[i] && set[i] != *str)
			i++
		if(!set[i])
			c++;
		i = 0;
		str++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    int i;
	int j;
	int lgt;
    char *dest;

	i = 0;
	j = -1;
	lgt = (char_count(s1, set) + 1);
	if(!(dest = malloc(lgt * sizeof(char)))) 
        return (NULL);
	
	while (*s1)
	{
		while(set[i] && set[i] != *s1)
			i++;
		if(!set[i])
			dest[++j] = *s1;
		i = 0;
		s1++;
	}
	dest[++j] = '\0';
	return (dest);
}

/*///////////////////////////////////////// A TESTER /////////////////////////////////////////////////////////*/


/*
char	**fill_tab(char **tab, char sep, char *str)
{
	int	w_lgt;
	int x;
	int y;
	int i;

	x = 0;
	y = -1;
	i = 0;
	w_lgt = 0;
	while str[i] == sep)
		i++;
	while (str[i])
	{
		if (!(tab[x] = malloc(sizeof(char) * (word_lgt(str, sep, i) + 1))))
			return (NULL);
		while (str[i] && str[i] != sep)
			tab[x][++y] = str[i++];
		tab[x][++y] = '\0';
		while (str[i] == sep)
			i++;
		y = -1;
		x++;
	}
	tab[x] = 0;
	return (tab);
}
*/





char	**ft_split(char const *s, char c)
{
	

}

/*/////////////////////////////////////////// A FAIRE ///////////////////////////////////////////////////////*/

int     lgt_check(int n)
{
    int i;

    i = 1;
    while ((n /= 10) > 0)
        i++;
    return (i);
}


char    *ft_itoa(int n)
{
    int i;
    int np;
    char *dest;

    np = 1;
    if (n < 0)
        np = -1;
    n *= np;
    i = (lgt_check(n) + 1);
    if (np < 0)
        i++;
    if (!(dest = malloc(sizeof(char) * i)))
		return (NULL);
    while (--i >= 0)
    {
        dest[i] = (n % 10);
        n /= 10;
    }
    return (dest);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    int lgt;
    char *dest;

    i = -1;
    lgt = (ft_strlen(s) + 1);
    if (!(dest = malloc(sizeof(char*) * lgt)))
		return (NULL);
    while (s[++i])
        dest[i] = f(s[i]);
    dest[i] = '\0';
    return (dest);
}

/*////////////////////////////////////////////// A TESTER /////////////////////////////////////////////*/

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = -1;
	while(s[++i])
		write(fd, &s[i], 1);
}

void ft_putendl_fd(char *s, int fd)
{
	int i;

	i = -1;
	while(s[++i])
		write(fd, &s[i], 1);
	write(fd, '\n', 1);
}

void ft_putnbr_fd(int n, int fd)
{
	n += '0';
	write(fd, &n, 1);
}

/*////////////////////////////////////////////// FILES //////////////////////////////////////////////////////*/