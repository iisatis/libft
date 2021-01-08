/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:47:13 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 16:58:04 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strndup(const char *src, unsigned int len)
{
	int i;
	char *dest;

	i = -1;
	if(!(dest = malloc(len + 1 * sizeof(char))))
		return (NULL); 
	while (src[++i] && i < len)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
