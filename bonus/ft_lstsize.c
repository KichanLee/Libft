/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:07:31 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/08 22:26:58 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		printf("%p\n", lst);
		lst = lst -> next;
		++count;
	}
	return (count);
}
//#include<stdio.h>
//int main()
//{
//	t_list *head;
//	t_list *node1;
//	t_list *node2;
//	head = (t_list *)malloc(sizeof(t_list));
//	node1 = (t_list *)malloc(sizeof(t_list));
//	node2 = (t_list *)malloc(sizeof(t_list));
//	head->next = node1;
//	node1 ->next = node2;
//	node2 ->next = NULL;
//	printf("haed address : %p\n", head);
//	int size = ft_lstsize(head);
//	printf("%d", size);	
//}