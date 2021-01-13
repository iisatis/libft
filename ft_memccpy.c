/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:23:46 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/13 14:54:57 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t size)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	s = (const unsigned char*)src;
	d = (unsigned char*)dest;
	i = 0;
	while (i < size && s[i] != (const unsigned char)ch)
	{
		d[i] = (unsigned char)s[i];
		i++;
	}
	if (i < size)
		if (s[i] == (const unsigned char)ch)
		{
			d[i] = (unsigned char)s[i];
			return (&dest[i + 1]);
		}
	return (NULL);
}
