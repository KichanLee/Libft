#include<stdio.h>

int main()
{


    int a = 3;

    int *b;

    b = &a;

    int *d;
    
    d = b;

//    int **c = &b;
    int **c;

    c = &b;


    printf("---------------------------------\n");
    printf("a value is : %d\n", a);
    printf("&a address is : %p\n", &a);
    
    
    printf("---------------------------------\n");
    printf("*b reference value is : %d\n", *b);
    printf("b value is : %p\n", b);
    printf("&b address is : %p\n", &b);
    
    printf("---------------------------------\n");
    printf("*d reference value is : %d\n", *d);
    printf("d value is : %p\n", d);
    printf("&d address is : %p\n", &d);
    
    printf("---------------------------------\n");
    printf("**c reference value is : %d\n", **c);
    printf("&c address is : %p\n", &c);
    printf("*c value is : %p\n", *c);

    //printf("---------------------------------\n");
    //printf("*d reference value is : %d\n", ***e);
    //printf("e value is : %p\n", e);
    //printf("&e address is : %p\n", &e);

}