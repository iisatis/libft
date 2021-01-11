/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:43:40 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/11 18:25:42 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t dest_size;
	size_t i;

	dest_size = ft_strlen((char *)src) + ft_strlen(dest);
	i = 0;
	if (len <= ft_strlen(dest))
		return (ft_strlen((char *)src) + len);
	while (*dest)
	{
		dest++;
		len--;
	}
	while (i < (len - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest_size);
}
