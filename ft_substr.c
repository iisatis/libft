/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:47:44 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/15 14:18:09 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, unsigned int len)
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			size;
	char			*dest;

	i = 0;
	while (i < start)
	{
		if (!s[++i])
		{
			if (!(dest = malloc(sizeof(char))))
				return (NULL);
			*dest = '\0';
			return (dest);
		}
	}
	size = ft_strlen((char *)&s[start]);
	if (size > len)
		size = len;
	dest = ft_strndup(&s[start], size);
	return (dest);
}
