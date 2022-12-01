#include<stdio.h>
#include<stdlib.h>
#include "libft.h";
/**
    list의 헤드노드에 대한 포인터
    prev 삽입될 위치의 선행 노드를 가릐는 포인터, new node는 prev 다음에 삽입된다.

    1. 헤더 노드가 null인 경우 : 공백 리스트에 삽입
    2. prev 가 null인 경우 : 리스트의 맨 처음에 삽입
    3. 일반적인 경우에는 prev node 다음에 삽입
ㅂ
**/
void insert(t_list *phead, t_list *prev, t_list *new)
{
    printf("before insert : new_node = %p\n", new);
    
}


int main()
{

}