/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:32:35 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/12 17:45:11 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	n = ft_strlen((char *)src);
	if (!len)
		return (n);
	while (src[i] && i < (len - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (n);
}
