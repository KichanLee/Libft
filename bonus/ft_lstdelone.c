/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:33:16 by wonhshin          #+#    #+#             */
/*   Updated: 2022/12/02 14:12:38 by kichlee          ###   ########.fr       */
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

int main()
{

	t_list *head = malloc(sizeof(t_list));
	t_list *one = malloc(sizeof(t_list));
	t_list *two = malloc(sizeof(t_list));
	t_list *three = malloc(sizeof(t_list));
	t_list *new = malloc(sizeof(t_list));

	char str1[10] = "이기찬";
	
	char *str2 = malloc(4);

	for(int i = 0; i < 3; ++i)
	{
		str2[i] = str1[i];
	}


	printf("str2 : %s", str2);
	
	//char str3 = "3기찬";
	//char str4 = "4기찬";
	//char str5 = "정준하";

	//str2 = malloc(4);
	//str3 = malloc(4);
	//str4 = malloc(4);
	//str5 = malloc(4);

	//head ->next = one;
	//one ->next = two;
	//two ->next = three;
	//three ->next = NULL;
	
	head ->content = str;
	//one ->content = str2;
	//two ->content = str3;
	//three ->content = str4;
	//new -> content = str5;

	printf("%s", (char *)head->content);
	ft_lstdelone(head, head->content);

	printf("%s", (char *)head->content);
			
	ft_lstdelone(head, head->content);

	printf("%s", (char *)head->content);
		
}