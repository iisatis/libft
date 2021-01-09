/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:43:40 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 16:28:07 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, int lgt)
{
	int dest_size;
	int i;

	dest_size = ft_strlen(src) + ft_strlen(dest);
	i = 0;
	while (i < (lgt - 1) && dest[i])
		i++;
	while (i < (lgt - 1) && *src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest_size);
}
