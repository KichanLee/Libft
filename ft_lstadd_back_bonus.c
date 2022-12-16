/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:28:22 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/16 20:55:45 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lkc;

	lkc = *lst;
	if (!lst)
		return ;
	else if (!(*lst))
		(*lst) = new;
	else
	{
		while ((*lst)-> next)
			(*lst) = (*lst)-> next;
		(*lst)-> next = new;
		(*lst) = lkc;
	}
}
