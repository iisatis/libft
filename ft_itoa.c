/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:50:07 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 16:03:59 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int		lgt_check(int n)
{
	int i;

	i = 1;
	while ((n /= 10) > 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		np;
	char	*dest;

	np = 1;
	if (n < 0)
		np = -1;
	n *= np;
	i = (lgt_check(n) + 1);
	if (np < 0)
		i++;
	if (!(dest = malloc(sizeof(char) * i)))
		return (NULL);
	while (--i >= 0)
	{
		dest[i] = (n % 10);
		n /= 10;
	}
	return (dest);
}
