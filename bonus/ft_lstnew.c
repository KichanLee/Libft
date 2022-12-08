/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:07:56 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/08 22:24:46 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *) malloc(sizeof(t_list));
	list -> content = content;
	list -> next = 0;
	return (list);
}

//int main()
//{
//	t_list	* l1;
//	t_list	* l2;
//	char *str = "12345";
//	int arr[5]= {1, 2, 3, 4, 5};
//	int *arr2 = arr;
//	l1 = ft_lstnew(str);
//	l2 = ft_lstnew(arr2);
//	printf("%s\n", (char *) l1->content);
//	printf("-------------------------------\n");
//	for(int i = 0; i < 5; ++i)
//	{
//		printf("%d ", ((int *)l2->content)[i]);
//}