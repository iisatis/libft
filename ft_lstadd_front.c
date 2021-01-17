/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:30:32 by pflorent          #+#    #+#             */
/*   Updated: 2021/01/17 15:36:26 by pflorent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst && *alst)
	{
		new->next = *alst;
		*alst = new;
	}
}
/*
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst && *alst)
	new->next = *alst;
	*alst = new;
}*/
