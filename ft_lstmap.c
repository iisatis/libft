/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 16:22:28 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/13 18:35:28 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;
	int		size;

	if (!(size = ft_lstsize(lst)))
		return (NULL);
	if (!(new_list = ft_lstnew(f(lst->content))))
		return (NULL);
	lst = lst->next;
	while (--size)
	{
		if (!(temp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, temp);
	}
	return (new_list);
}
