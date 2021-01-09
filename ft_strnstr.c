/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:44:22 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 17:32:02 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, unsigned int lgt)
{
	unsigned int i;
	char *str_c;

	str_c = (char *)str;
	if (*find == '\0' || lgt == 0)
		return (str_c);
	while (*str_c)
	{
		if (*str_c == *find)
		{
			i = 1;
			while (str_c[i] == find[i] && lgt > i)
				i++;
			if (find[i] == '\0' || i == lgt)
				return (str_c);
		}
		str_c++;
	}
	return (NULL);
}
