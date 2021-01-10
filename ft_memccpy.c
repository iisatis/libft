/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:23:46 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/10 16:37:23 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t size)
{
	size_t				i;
	unsigned char		*dest_c;
	const unsigned char	*src_c;

	src_c = (const unsigned char*)src;
	dest_c = (unsigned char*)dest;
	i = 0;
	while (i < size && src_c[i] != (const unsigned char)ch)
	{
		dest_c[i] = (unsigned char)src_c[i];
		i++;
	}
	if (src_c[i] == (const unsigned char)ch && i < size)
	{
		dest_c[i] = (unsigned char)src_c[i];
		return (&dest[i + 1]);
	}
	return (NULL);
}
