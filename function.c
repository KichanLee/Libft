#include <stdio.h>

void add(int a, int b)
{
    int c;
    c = a + b;
}

int main()
{
    void (*f)(int x, int y);

    f = add;

   printf("add address :%p\n", add );
   printf("f address :%p\n", f);
   printf("&f address :%p\n", &f);
   printf("*f address :%p\n", *f);
}