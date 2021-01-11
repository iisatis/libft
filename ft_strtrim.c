/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:49:08 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/11 17:58:12 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*dest;

	start = 0;
	end = ft_strlen((char *)s1);
	i = 0;
	while(ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
		end--;
	if (!(dest = malloc((end - start + 2) * sizeof(char))))
		return (NULL);
	while (start <= end)
	{
		dest[i] = (char)s1[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
