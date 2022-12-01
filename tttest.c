#include<stdio.h>

typedef struct Student
{
    int s_id;
    int age;
};

int main()
{
    Student lkc;
    Student *ptr;

    ptr = &lkc;

    (*ptr).s_id = 1004;
    ptr->age = 20;
    
}
