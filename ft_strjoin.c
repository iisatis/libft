/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:48:30 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 17:18:30 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	size_t	size;
	char	*dest;

	i = -1;
	size = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	if (!(dest = malloc((size + 1) * sizeof(char))))
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
	dest[++i] = '\0';
	return (dest);
}
