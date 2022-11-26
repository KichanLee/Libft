#include <stdio.h>
#include <ctype.h>
#include "head.h"
#include <string.h>

int main(){

    char buffer[30];
    
    char *string =  "aaaaaaaa";

    string = (char *) ft_memset(buffer, 'A', 10);






    
    printf("-----------is alpha test-----------\n");
    printf("isalpa(%c) : %d\n",'?', isalpha('?'));
    printf("isalpa(%c) : %d\n",'a',  isalpha('a'));
    printf("isalpa(%c) : %d\n",'Z', isalpha('Z'));
    printf("isalpa(%c) : %d\n",'s', isalpha('s'));
    printf("\n");

    printf("-----------is digit test-----------\n");
    printf("isdigit(%c) : %d\n", '?', isdigit('?'));
    printf("isdigit(%c) : %d\n", 's', isdigit('s'));
    printf("isdigit(%c) : %d\n", '0', isdigit('0'));
    printf("isdigit(%c) : %d\n", '9', isdigit('9'));
    printf("\n");

    printf("-----------is ascii test-----------\n");
    printf("isascii(%c) : %d\n", '?', isascii('?'));
    printf("isascii(%c) : %d\n", 's', isascii('s'));
    printf("isascii(%c) : %d\n", '0', isascii('0'));
    //printf("isascii(%c) : %d\n", 'ã', isascii('ã'));
    printf("\n");

    printf("-----------is ascii test-----------\n");
    printf("isprint(%c) : %d\n", '?', isprint('?'));
    printf("isprint(%c) : %d\n", 's', isprint('s'));
    printf("isprint(%c) : %d\n", '0', isprint('0'));
    printf("isprint(%c) : %d\n", ' ', isprint(' '));
    printf("\n");
    

    printf("-----------ft_memset test-----------\n");
    printf("memset(%c) : %d\n", '?', memset(void *b, 3, ));



    printf("\n");




}