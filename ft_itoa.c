/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:50:07 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/18 16:32:20 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lgt_check(long n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		i;
	long	r;
	char	*dest;

	r = (long)n;
	i = (lgt_check(r));
	if (!(dest = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (r < 0)
	{
		r *= -1;
		dest[0] = '-';
	}
	dest[i] = '\0';
	while (r > 9)
	{
		dest[--i] = ((r % 10) + '0');
		r /= 10;
	}
	dest[--i] = (r + '0');
	return (dest);
}
