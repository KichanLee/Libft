/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:33:55 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/11 15:56:47 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>


void	del(void *content)
{
	free(content);
}


void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if(!lst || !del)
		return;
	t_list	*first;

	while (*lst)
	{
		first = (*lst)-> next;
		ft_lstdelone(*lst, *del2);
		*lst = first;
	}
	(*lst) = NULL;
}
int main()
{
	t_list *head = malloc(sizeof(t_list));
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	t_list *node4 = malloc(sizeof(t_list));
	
	t_list *new;	

	char *str = malloc(5);
	char *str1 = malloc(5);
	char *str2 = malloc(5);
	char *str3 = malloc(5);
	

	memcpy(str, "1kc", 5);
	memcpy(str1, "2kc", 5);
	memcpy(str2, "3kc", 5);
	memcpy(str3, "4kc", 5);
	

	node1 ->content = str;
	node2 ->content = str1;
	node3 ->content = str2;
	node4 ->content = str3;

	head -> next = node1;
	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = node4;
	node4 -> next = NULL;
	
	while (head)
	{
		printf("%s", head->content);	
		head = head -> next;
	}


	new = head;
	ft_lstclear(&head,del);

	printf("\n-------after function------------\n");
	while (new)
	{
		printf("%s", new->content);	
		new = new -> next;
	}
	
}