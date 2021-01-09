/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:24:51 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 16:03:59 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	int			i;
	char		temp[size + 1];
	char		*dest_c;
	const char	*src_c;

	dest_c = (char *)dest;
	src_c = (const char *)src;
	i = -1;
	while (++i < size)
		temp[i] = src_c[i];
	i = -1;
	while (++i < size)
		dest_c[i] = temp[i];
	return (dest);
}
