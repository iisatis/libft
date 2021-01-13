/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:30:04 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/13 14:49:45 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	if (chr == '\0')
	{
		while (*str)
			str++;
		return ((char *)str);
	}
	while (*str)
	{
		if (*str == (char)chr)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
