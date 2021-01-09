/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:21:36 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 16:03:59 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_memset(void *p, int value, size_t size)
{
	long	i;
	char	*p_c;

	i = -1;
	p_c = (char *)p;
	while (++i < size)
		p_c[i] = (unsigned char)value;
	return (p);
}
