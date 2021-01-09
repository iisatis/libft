/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:23:46 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 15:10:41 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int ch, size_t size)
{
	long			i;
	unsigned int	*p;
	unsigned char	*dst_c;
	unsigned char	*src_c;

	src_c = (unsigned char*)src;
	dst_c = (unsigned char*)dest;
	i = -1;
	p = NULL;
	while (++i < size && src_c[i] != (unsigned char)ch)
		dest_c[i] = src_c[i];
	if (src_c[i] == ch)
	{
		dest_c[i] = src_c[i];
		*p = &dest_c[i];
	}
	return (p);
}
