
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		lgt;
	char	*dest;

	i = -1;
	lgt = (ft_strlen(s) + 1);
	if (!(dest = malloc(sizeof(char*) * lgt)))
		return (NULL);
	while (s[++i])
		dest[i] = f(s[i]);
	dest[i] = '\0';
	return (dest);
}

int		main()
{
	return (0);
}
