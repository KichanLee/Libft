#include <strings.h>
#include <stdio.h>
#include "test.h"

// 채워준다는 게 숫자 0 == 아스키코드 0 Nul
void    ft_bzero(void *s, size_t n)
{  
    size_t  i;
    // unsigned char 한바이트씩 바꿔주는 char 1byte 인데 
    i = 0;

    while(i < n){
        ((char *)s)[i] = 0;
        i++; 
    }
}

// int main(){

//     char str2[10] = "123456789";
//     char str3[10] = "abcdefg";

//     ft_bzero(str3, 4);
//     bzero(str2, 3);

//     printf("%c", str2[5]);
//     printf("%c", str3[5]);
// }