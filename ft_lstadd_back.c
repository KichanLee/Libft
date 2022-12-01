#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (lst)
		lst = lst -> next;
}

int main()
{
	t_list *head = malloc(sizeof(t_list));
	t_list *one = malloc(sizeof(t_list));
	t_list *two = malloc(sizeof(t_list));
	t_list *three = malloc(sizeof(t_list));
	t_list *new = malloc(sizeof(t_list));

	char *str = "1기찬";
	char *str2 = "2기찬";
	char *str3 = "3기찬";
	char *str4 = "4기찬";
	char *str5 = "정준하";

	head ->next = one;
	one ->next = two;
	two ->next = three;
	three ->next = NULL;
	
	head ->content = str;
	one ->content = str2;
	two ->content = str3;
	three ->content = str4;
	new -> content = str5;

	ft_lstadd_back(&head, new);
}