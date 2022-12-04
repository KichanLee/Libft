#include<stdio.h>
#include<stdlib.h>

// data area 
int g_num = 0;

int main()
{
    //data area
    static int s_num = 0;
    //stack area
    int num = 0;
    // ptr이 가르키는 영역 heap
    char *ptr = malloc(5);

    char *code = "code";
    char str[10] = "12345";
    

    printf("g_num :\t%p\n", &g_num);
    printf("code address : \t%p\n", "code");
    printf("s_num :\t%p\n", &s_num);
    printf("num :\t%p\n", &num);
    printf("ptr(heap) :\t%p\n", ptr);
    
    //printf("g_num :\t%p", g_num);

}
