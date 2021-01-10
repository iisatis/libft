/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:21:36 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/10 14:10:11 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int value, size_t size)
{
	size_t			i;
	unsigned char	*p_c;

	i = 0;
	p_c = (unsigned char *)p;
	while (++i < size)
	{
		p_c[i] = (unsigned char)value;
		i++;
	}
	return (p);
}
