#include <strings.h>
#include <stdio.h>
#include "test.h"

// 채워준다는 게 숫자 0 ? / 문자 '0' ? / 아스키코드 0 ?
void    ft_bzero(void *s, size_t n)
{  
    size_t  i;

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