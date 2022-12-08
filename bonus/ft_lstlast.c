#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst -> next;
	return (lst);
}
//int main()
//{
//	t_list *head;
//	t_list *node1;
//	t_list *node2;
//	t_list *node3;
//	t_list *new;
//	t_list *last;
//	char *str = "1기찬";
//	char *str2 = "2기찬";
//	char *str3 = "3기찬";
//	char *str4 = "4기찬";
//	char *str5 = "정준하";
//	head  = (t_list *)malloc(sizeof(t_list));
//	node1 = (t_list *)malloc(sizeof(t_list));
//	node2 = (t_list *)malloc(sizeof(t_list));
//	node3 = (t_list *)malloc(sizeof(t_list));
//	new = (t_list *)malloc(sizeof(t_list));
//	head ->next = node1;
//	node1 ->next = node2;
//	node2 ->next = node3;
//	node3 ->next = NULL;
//	head ->content = str;
//	node1 ->content = str2;
//	node2 ->content = str3;
//	node3 ->content = str4;
//	new ->content = str5;
//	//printf("%s",(char *) new->content);
//	last = ft_lstlast(head);
//	printf("%s", (char *) last->content);
//}