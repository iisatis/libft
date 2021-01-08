/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:24:51 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 16:58:04 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove (void *dest, const void *src, size_t size)
{
	int i;
	void temp[size];

	i = -1;
	while (++i < size)
		temp[i] = src[i];
	i = -1;
    while (++i < size)
        dest[i] = temp[i];
    return (dest);
}
