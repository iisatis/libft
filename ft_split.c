/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:46:28 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 17:18:30 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_all(char **to_free)
{
	int i;

	i = -1;
	while (to_free[++i])
		free(to_free[i]);
	free(to_free);
}

int		word_len(const char *s, char sep)
{
	int i;

	i = 0;
	while (s[i] && s[i] != sep)
		i++;
	return (i);
}

int		words_count(char const *s, char sep)
{
	int i;
	int count;

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

int		fill_tab(char **dest, char const *s, char c)
{
	int		i;

	i = -1;
	while (s[++i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			if (!(*dest = ft_strndup(&s[i], word_len(&s[i], c))))	
				return (1);
			dest++;
			i += word_len(&s[i], c);
		}
	}
	*dest = 0;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**dest;

	count = words_count(s, c);
	if (!(dest = malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	if (!count)
	{
		if (!(dest[0] = malloc(sizeof(char))))
			return (NULL);
		*dest[0] = '\0';
		return (dest);
	}
	if (fill_tab(dest, s, c))
	{
		free_all(dest);
		return (NULL);
	}
	return (dest);
}
