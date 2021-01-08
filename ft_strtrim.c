/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:49:08 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 17:40:59 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		char_count(char const *str, char const *set)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (*str)
	{
		while (set[i] && set[i] != *str)
			i++;
		if (!set[i])
			c++;
		i = 0;
		str++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		lgt;
	char	*dest;

	i = 0;
	j = -1;
	lgt = (char_count(s1, set) + 1);
	if (!(dest = malloc(lgt * sizeof(char))))
		return (NULL);
	while (*s1)
	{
		while (set[i] && set[i] != *s1)
			i++;
		if (!set[i])
			dest[++j] = *s1;
		i = 0;
		s1++;
	}
	dest[++j] = '\0';
	return (dest);
}
