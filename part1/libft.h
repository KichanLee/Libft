#ifndef  libft
#define libft
#include<stdlib.h>
#include<stdio.h>
int ft_isalpha(int ch);
int ft_isdigit(int digit);
void * ft_memset(void *b, int n, size_t length);
char	*ft_itoa(int n);
int ft_strlen(const char *s);

typedef struct s_list
{
    void    *content;
    struct  s_list  *next;
}                   t_list;

t_list	*ft_lstnew(void *content);

#endif