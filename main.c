
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
    if (a >= 0 && a <= 127)
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

int		main()
{
	puts("Test strlen");
	char *strlen1 = "qwertyuiopas";
	char *strlen2 = "q";
	char *strlen3 = "";
	printf("Attendu: 12, Recu: %d\n", ft_strlen(strlen1));
	printf("Attendu: 1, Recu: %d\n", ft_strlen(strlen2));
	printf("Attendu: 0, Recu: %d\n", ft_strlen(strlen3));




	return (0);
}
