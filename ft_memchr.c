/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:25:45 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 17:18:30 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem_block, int ch, size_t size)
{
	size_t			i;
	unsigned char	*mem_block_c;

	mem_block_c = (unsigned char *)mem_block;
	i = 0;
	while (i < size)
	{
		if (mem_block_c[i] == (unsigned char)ch)
			return (&mem_block_c[i]);
		i++;
	}
	return (NULL);
}
