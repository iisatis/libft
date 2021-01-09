/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:31:24 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 17:45:36 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int		i;
	char	*str_c;

	i = 0;
	str_c = (char *)str;
	while (*str_c)
	{
		if (*str_c == chr)
			i++;
		str_c++;
	}
	if (i == 0)
		return (NULL);
	else
	{
		while (*str_c != chr)
			str_c--;
		return (str_c);
	}
}
