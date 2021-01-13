/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:31:24 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/13 14:49:45 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int		i;

	i = 0;
	if (chr == '\0')
	{
		while (*str)
			str++;
		return ((char *)str);
	}
	while (*str)
	{
		if (*str == (char)chr)
			i++;
		str++;
	}
	if (i == 0)
		return (NULL);
	else
	{
		while (*str != (char)chr)
			str--;
		return ((char *)str);
	}
}
