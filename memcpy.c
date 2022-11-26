#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void * ft_memcpy(void *dst, const void *src, size_t n){

    size_t i;

    i = 0;
    while (i < n){

        ((char *)dst)[i]= ((char *)src)[i];
        ++i; 
    }
    // 형변환을 다시 안해줘도 되는 이유는 (char *)선언 시 일시적으로 type이 변경되서 그런건가?
    return (dst);
}


int main ()
{
  char str1[] = "123456789";
  char str2[] = "abcdefghig";

  memcpy(str2, str1, strlen(str1));
  printf("%s", str2);

  char str3[] = "123456789";
  char str4[] = "abcdefghig";

  ft_memcpy(str4, str3, strlen(str1));
  printf("%s", str4);
  return 0;
}