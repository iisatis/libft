/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:45:51 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/08 17:06:16 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t elem_count, size_t elem_size)
{
	char *dest;

	if (!(dest = malloc(elem_size * elem_count)))
		return (NULL);
	ft_memset(dest, 0, elem_count * elem_size);
	return (dest);
}
