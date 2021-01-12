/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:44:22 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/12 17:45:11 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*find == '\0')
		return ((char *)str);
	while (str[i] && (i < len))
	{
		if (str[i] == *find)
		{
			j = 1;
			while (find[j] && (str[i + j] == find[j]))
				j++;
			if (find[j] == '\0' && (i + j) <= len)
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
