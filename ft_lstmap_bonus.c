/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:49:04 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/12 15:51:51 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lst 지워주기 속함.
void	del3(void *content)
{
	free(content);
}

// lst 지워주기
void    ft_lstdelone(t_list *lst, void (*del3)(void *))
{
    del(lst->content);
    free(lst);
}

// 2배 해주는 함수
void	f(void *content)
{
	for(int i = 0; i < 3; ++i)
	{
		((int *)content)[i] = ((int *)content)[i] * 2;
	}
	printf("function exit\n");

	for(int i = 0; i < 3; ++i)
	{
		printf("%d ", ((int *)content)[i]);
	}
	printf("\n");
}


void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst -> next;
	}
	return ;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	// 
	if(!lst || !f || !del)
		return (0);
	t_list * head;
	t_list * tmp;
	head = NULL;
	
	while (lst)
	{
		tmp = ft_lstnew(f(lst -> content));

		if(!tmp)
		{
			ft_lstclear(&tmp, del3);
			return  (0);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	retrun (head);
}

int main()
{
	t_list *head  = malloc(sizeof(t_list));
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	t_list *node4 = malloc(sizeof(t_list));

	int arr1[10] = {1, 2, 3};
	int arr2[10] = {4, 5, 6};
	int arr3[10] = {7, 8, 9};
	int arr4[10] = {10, 11, 12};
	
	head -> next = node1;
	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = node4;
	
	node1 ->content = &arr1;
	node2 ->content = &arr2;
	node3 ->content = &arr3;
	node4 ->content = &arr4;
	

}