/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:59:54 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/13 16:04:41 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *del_lst;

	del_lst = *lst;
	while(del_lst->next != NULL)
	{
		ft_lstdelone(del_lst, del);
		del_lst = del_lst->next;
	}
}
