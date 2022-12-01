/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:41:25 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/01 17:32:24 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd(t_list **lst, t_list *new)
{
	if(!lst || !new)
		return;
	new -> next = *lst;
	lst = &new;
}
/**
 * 
 * 	lst == null 이라는 것은 리스트 자체가 없다는 뜻이며
 *  *lst == null 은 첫번째 주소, head를 의미하므로 리스트 내에 노드가 존재하지 않는다는 뜻
 * 
 * */
int main()
{
	t_list *head;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *new;
	t_list *origin;

	char *str = "1기찬";
	char *str2 = "2기찬";
	char *str3 = "3기찬";
	char *str4 = "4기찬";
	char *str5 = "정준하";
	
	head  = (t_list *)malloc(sizeof(t_list));
	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node3 = (t_list *)malloc(sizeof(t_list));
	new = (t_list *)malloc(sizeof(t_list));
	origin = (t_list *)malloc(sizeof(t_list));
	
	printf("--------------------------------------\n");
	printf("head value is : %p\n", head);
	printf("head address is : %p\n", &head);
	
	head ->next = node1;
	node1 ->next = node2;
	node2 ->next = node3;
	node3 ->next = NULL;
	
	head ->content = str;
	node1 ->content = str2;
	node2 ->content = str3;
	node3 ->content = str4;
	new ->content = str5;

	
	printf("\n------------------------------------\n");
	printf("\n");
	printf("new value is : %p\n", new);
	printf("new address is : %p\n", &new);
	printf("\n");



	ft_lstadd(&head,new);

	for(int i = 0 ; i < 5; i++)
	{
		printf("%s\n", (char *)head->content);
		head = head -> next;
	}
}

