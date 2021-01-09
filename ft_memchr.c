/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:25:45 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/09 15:14:06 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *mem_block, int ch, size_t size)
{
	long			i;
	unsigned int	*p;
	unsigned char	*mem_block_c;

	mem_block_c = (unsigned char *)mem_block;
	i = -1;
	p = NULL;
	while (++i < size)
		if (mem_block_c[i] == (unsigned char)ch)
		{
			*p = &mem_block_c[i];
			return (p);
		}
	return (p);
}
