/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:47:44 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 16:58:04 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	int size;
	char *dest;

	i = -1;
	while (++i < start)
		if(!s[i])
		{
			if(!(dest = malloc(sizeof(char))))
				return (NULL);
			*dest = '\0';
			return (dest);
		}
	size = ft_strlen(&s[start]);
	if(size > len)
		size = len;
	dest = ft_strndup(&s[start], size);
	return (dest);
}
