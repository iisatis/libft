/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:23:18 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/10 14:17:21 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t		i;
	const char	*s;
	char		*d;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	s = (const char *)src;
	d = (char *)dest;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
