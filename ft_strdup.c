/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:46:40 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 16:03:59 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;
	int		size;

	i = -1;
	size = ft_strlen(src);
	if (!(dest = malloc(size * sizeof(char))) || size == 0)
		return (NULL);
	while (src[++i])
		dest[i] = src[i];
	return (dest);
}
