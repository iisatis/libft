/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:46:28 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/19 14:04:45 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_all(char **to_free)
{
	int n;

	n = 0;
	while (to_free[n])
	{
		free(to_free[n]);
		n++;
	}
	free(to_free);
}

static size_t	word_len(const char *s, char sep)
{
	int i;

	i = 0;
	while (s[i] && s[i] != sep)
		i++;
	return (i);
}

static size_t	words_count(char const *s, char sep)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i])
		{
			count++;
			i += word_len(&s[i], sep);
		}
	}
	return (count);
}

static char		*filler(const char *src, unsigned int len)
{
	size_t	i;
	char	*dest;

	i = 0;
	if (!(dest = malloc(len + 1 * sizeof(char))))
		return (NULL);
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char			**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	n;
	char	**dest;

	count = words_count(s, c);
	n = 0;
	if (!(dest = malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	while (count)
	{
		while (*s && *s == (const char)c)
			s++;
		dest[n] = filler(s, word_len(s, c));
		if (!dest[n])
		{
			free_all(dest);
			return (NULL);
		}
		while (*s && *s != (const char)c)
			s++;
		count--;
		n++;
	}
	dest[n] = 0;
	return (dest);
}
