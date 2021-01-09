/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:23:18 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 18:25:09 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t		i;
	const char	*src_c;
	char		*dest_c;

	i = 0;
	src_c = (const char *)src;
	dest_c = (char *)dest;
	while (i < size)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest);
}
