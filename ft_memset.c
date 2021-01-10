/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:21:36 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/10 16:07:23 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int value, size_t size)
{
	unsigned char	*filler;

	filler = (unsigned char *)p;
	while (size)
	{
		*filler = (unsigned char)value;
		filler++;
		size--;
	}
	return (p);
}
