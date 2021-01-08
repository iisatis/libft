/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:50:41 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 16:58:04 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	int lgt;
	char *dest;

	i = -1;
	lgt = (ft_strlen(s) + 1);
	if (!(dest = malloc(sizeof(char*) * lgt)))
		return (NULL);
	while (s[++i])
		dest[i] = f(s[i]);
	dest[i] = '\0';
	return (dest);
}
