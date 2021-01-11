/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:26:16 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/11 16:52:25 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t			i;
	unsigned char	*p1_c;
	unsigned char	*p2_c;

	i = 0;
	p1_c = (unsigned char *)p1;
	p2_c = (unsigned char *)p2;
	while (size--)
	{
		if (p1_c[i] != p2_c[i])
			return (p1_c[i] - p2_c[i]);
		i++;
	}
	return (0);
}
