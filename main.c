
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t        ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

size_t        ft_strlcat(char *dest, const char *src, int lgt)
{
    size_t    dest_size;
    int        i;
    int       j;

    dest_size = ft_strlen((char *)src) + ft_strlen((char *)dest);
    i = 0;
    j =0;
    while (i < (lgt - 1) && dest[i])
        i++;
    while (i < (lgt - 1) && src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest_size);
}

int        main()
{
    int i = 30;
    char s[100] = "yooooooo";
    char *s1 = s;
    char *s2 = "looooooo";

	ft_strlcat(s1, s2, i);
    printf("%s\n", s1);
}
