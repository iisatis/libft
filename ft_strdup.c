/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:46:40 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 17:08:20 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*src_c;
	char	*dest;
	size_t	size;

	i = -1;
	src_c = (char *)src;
	size = ft_strlen(src_c);
	if (!(dest = malloc((size + 1) * sizeof(char))) || size == 0)
		return (NULL);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
