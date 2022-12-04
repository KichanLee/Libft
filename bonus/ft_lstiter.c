#include "libft.h"
#include <stdio.h>

void	f(void *content)
{
	printf("function aplied");
	//int * tmp = (int *)content;
	for(int i = 0; i < 3; ++i)
	{
		((int *)content)[i] = ((int *)content)[i] * 2;
	}
	printf("function exit\n");
	for(int i = 0; i < 3; ++i)
	{
		printf("%d", ((int *)content)[i]);
	}
	printf("\n");
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst){
		f(lst->content);
		lst = lst -> next;
	}
	return;
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
	
	ft_lstiter(node1, &f);
	ft_lstiter(node1, &f);

	printf("f address :%p\n", f);
	printf("*f address :%p\n", *f);
	printf("&f address :%p\n", &f);

}