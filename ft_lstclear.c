/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:59:54 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/18 16:31:05 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *del_lst;

	if (lst != NULL)
		while (*lst != NULL)
		{
			del_lst = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = del_lst;
		}
}
