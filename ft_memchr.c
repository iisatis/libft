/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:25:45 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 17:07:12 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *mem_block, int ch, size_t size)
{
	int i;
	int *p;

	i = -1;
	p = NULL;
	while (++i < size)
		if (mem_block[i] == ch)
		{
			*p = &mem_block[i];
			return (p);
		}
	return (p);
}
