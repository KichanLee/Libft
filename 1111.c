/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1111.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:49:56 by wonhshin          #+#    #+#             */
/*   Updated: 2022/11/30 20:13:24 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
   	if (!lst || !new)
        return ;
	new->next = *lst;
	*lst = new;

}

int main()
{
    t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list 	*new;

	t_list * realhead;
	

		
	int *b;
	int x = 3;
	b = &x;
	*a = b;

	printf("a의 값 : %d \n", **a);
	

	realhead = &head;
	
	new = (t_list *)malloc(sizeof(t_list));
	
	char *abc = "12345";
	char *def = "67891";
	char *lkc = "960108";
	

	head = (t_list *)malloc(sizeof(t_list));
	node1 = (t_list *)malloc(sizeof(t_list));
    node2 = (t_list *)malloc(sizeof(t_list));
	head->content = lkc;
    head->next = node1;
    node1->content = abc;
    node1->next = node2;
    node2->content = def;
    node2->next = NULL;
	new->content = "hong";
	ft_lstadd_front(&head, new);
	realhead = head;
	printf("head address : %p\n", head);
	while(head!=NULL)
    {
        printf("%s\n", head->content);
        head = head->next;
		printf("head address : %p\n", head);
    }


	printf("\n-------------\n");

	while(realhead!=NULL)
    {
        printf("%s\n",  realhead -> content);
        realhead = realhead->next;
    }
}