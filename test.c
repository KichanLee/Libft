#include <stdio.h>

int main()
{
    char *ptr = "wonie";
    char *ptr2 = "wonie";
    char arr[10] = "lkc";

    printf("%p\n", ptr);
    printf("ptr address : %p\n", &ptr);
    printf("ptr2 address : %p\n", &ptr2);
    printf("%p\n", "wonie");
    printf("%p\n", ptr2);
    printf("arr[0] address : %p\n", &(arr[0]));
    printf("arr address : %p\n", arr);
    printf("lkc address  : %p\n","lkc");
}