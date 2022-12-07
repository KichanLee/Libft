#include "libft.h"
size_t t_strlen(const char *str){

	size_t i = 0 ;

	while(str[i])
		++i;
	return (i);
}

size_t ft_strlcpy(char *dst, const char * src, size_t size){

	size_t dst_len;
	size_t src_len;
	int i;

	i = 0;
	dst_len = t_strlen(dst);
	src_len = t_strlen(src);
	while (dst_len + 1 < size && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';

	return (size - 1);
}
#include <string.h>
#include <stdio.h>
int main()
{
	char *src1 ="1234567";
	char dst1[10];
	
	char *src2 ="1234567";
	char dst2[10];

	ft_strlcpy(dst1, src1, 4);
	strlcpy(dst2, src2, 4);

	printf("my function : %s\n", dst1);	
	printf("original function :%s\n", dst2);	
}