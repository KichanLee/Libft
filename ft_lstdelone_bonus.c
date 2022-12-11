/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:33:16 by wonhshin          #+#    #+#             */
/*   Updated: 2022/12/11 14:53:52 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>


void	del(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

//int main()
//{
//	t_list *head = malloc(sizeof(t_list));
//	t_list *one = malloc(sizeof(t_list));
//	t_list *two = malloc(sizeof(t_list));
//	t_list *three = malloc(sizeof(t_list));
//	t_list *new = malloc(sizeof(t_list));
	
//	// free가능한 영역은 heap 영역만! 
//	char *str1 = malloc(6);
//	char *str2 = malloc(6);
//	char *str3 = malloc(6);
//	char *str4 = malloc(6);
//	char *str5 = malloc(6);
	
//	memcpy(str1, "1kic", 4);
//	memcpy(str2, "2kic", 4);
//	memcpy(str3, "3kic", 4);
//	memcpy(str4, "4kic", 4);
//	memcpy(str5, "5kic", 4);

	
//	head ->next = one;
//	one ->next = two;
//	two ->next = three;
//	three ->next = NULL;
	
//	head ->content = str1;
//	one ->content = str2;
//	two ->content = str3;
//	three ->content = str4;
//	new -> content = str5;
	
//	printf("%s", (char *)head->content);
//	ft_lstdelone(head, del);
//	printf("\nafter function : \n");
//	printf("%s", (char *)head->content);

//	while (head)
//	{
//		printf("%s", (char *)head->content);
//		head = head -> next;
//	}
//}