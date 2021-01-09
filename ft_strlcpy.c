/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:32:35 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 17:22:32 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, int lgt)
{
	int i;
	int n;

	i = -1;
	n = ft_strlen((char *)src);
	while (src[++i] && i < (lgt - 1))
		dest[i] = src[i];
	dest[i] = '\0';
	return (n);
}
