/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:50:41 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/11 16:36:38 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*dest;

	i = -1;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
		return (NULL);
	while (s[++i])
		dest[i] = f(i, s[i]);
	dest[i] = '\0';
	return (dest);
}
