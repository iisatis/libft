/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:31:49 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/11 18:31:29 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *first_str, const char *second_str, size_t lgt)
{
	size_t	i;

	i = 0;
	while (first_str[i] && (first_str[i] == second_str[i]) && i < lgt)
		i++;
	return ((int)(first_str[i] - second_str[i]));
}
