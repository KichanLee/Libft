#ifndef  libft
#define libft
#include<stdlib.h>
#include<stdio.h>
int ft_isalpha(int ch);
int ft_isdigit(int digit);
void * ft_memset(void *b, int n, size_t length);

typedef struct s_list
{
    void    *content;
    struct  s_list  *next;
}                   t_list;


#endif