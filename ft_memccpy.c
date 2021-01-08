/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:23:46 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 17:08:06 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int ch, size_t size)
{
	int i;
	int *p;

	i = -1;
	p = NULL;
	while (++i < size && src[i] != ch)
		dest[i] = src[i];
	if (src[i] == ch)
	{
		dest[i] = src[i];
		*p = &dest[i];
	}
	return (p);
}
