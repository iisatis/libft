/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:44:22 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/10 15:46:57 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t lgt)
{
	size_t	i;
    size_t	j;

    i = 0;
	if (*find == '\0')
		return ((char *)str);
	while (str[i] && (i < lgt))
	{
		if (str[i] == *find)
		{
			j = 1;
			while (find[j] && (str[i + j] == find[j]))
				j++;
			if (find[j] == '\0' && (i + j) <= lgt)
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
