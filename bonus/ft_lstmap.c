/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:49:04 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/03 21:47:09 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    del(void *content)
{
	free(content);
}

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    del(lst->content);
    free(lst);
}

void	*f(void * content)
{
	
	return (content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *tmp = lst;
		
	while(lst)
	{
		// f함수가 malloc함수가있어 할당이실패하는 경우
		// f함수를 적용시키는게 먼저 ? 아니면 적용시켜 새로운 함수를 만드는것이 먼저?
		// 2가지 다 만들어보자.

		// 1번 함수를 적용하다가 malloc에 실패했을때 값.	 
		//if (!(f(lst->content)))
		//{ 
		//	printf("allocate 해제");
		//	// 뒤로가는 법 ?
		//	while(tmp2)
		//	{
		//		tmp2 = tmp -> next;
		//		ft_lstdelone(tmp);
		//	}
		//	free(tmp2);
		//}
		// 2번 적용
		// 적용 시켜서 새로운 함수 만들기
		while (lst)
		{
			if(!f(tmp))
				{
					
				}
		}
		lst = lst -> next;
	}
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

	node1 = ft_lstmap(head,f, del); 

	
	
}