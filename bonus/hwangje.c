#include<stdio.h>

int add(int *a, int *b)
{
    return (*a + *b);
}

int main()
{
 
    char str[10] = "abc";

    
 
    printf("str address :%p\n", str);
    printf("&str address :%p\n", &str);
    //printf("*str address :%p\n", *str);

    printf("add address :%p\n", add);
    printf("add address :%p\n", &add);
    printf("add address :%p\n", *add);

}