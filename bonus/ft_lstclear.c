#include "libft.h"

void	del(void *content)
{
	free(content);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list * first;

	while (*lst)
	{
		first = (*lst) -> next;
		ft_lstdelone(*lst, del);
		*lst =  first;
	}
}

int main()
{

}