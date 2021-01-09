/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:26:16 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 16:03:59 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int		ft_memcmp(const void *p1, const void *p2, size_t size)
{
	long	i;
	int		r;
	const unsigned char *p1_c;
	const unsigned char *p2_c;

	i = 0;
	r = 0;
	p1_c = (const unsigned char *)p1;
	p2_c = (const unsigned char *)p2;
	while (p1_c[i] == p2_c[i] && i < size)
		i++;
	if (p1_c[i] < p2_c[i] && i < size)
		r = -1;
	else if (p1_c[i] > p2_c[i] && i < size)
		r = 1;
	return (r);
}
