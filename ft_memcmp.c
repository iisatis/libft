/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:26:16 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 17:05:38 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *p1, const void *p2, size_t size)
{
	int i;
	int r;

	i = 0;
	r = 0;
	while (p1[i] == p2[i] && i < size)
		i++;
	if (p1[i] < p2[i] && i < size)
		r = -1;
	else if (p1[i] > p2[i] && i < size)
		r = 1;
	return (r);
}
