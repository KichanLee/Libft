#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *	ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;

	while(((char *)s)[i] != '\0')
	{
		if(((char *)s)[i] == (unsigned char) c)
		{
			return ((void *)&s[i]);
		}
		i++;
	}
	return (0);

	//while ((*(char *)s) != '\0' && i < n )
	//{
	//	if((*(char *)s) == (unsigned char)(c))
	//		return ((void *)s);
	//	i++;
	//	s++;
	//}
	//return (0);
}

int main () {
	const char str[] = "http:www.tutorialspoint.com";
	const char ch = 'p';
	char *ret;
	char *ret2;

	ret = memchr(str, ch, strlen(str));
	ret2 = ft_memchr(str, ch, strlen(str));

	
	printf("---------------------------------------------------------------\n");
	printf("original function : String after |%c| is - |%s|\n", ch, ret);
	printf("my       function : String after |%c| is - |%s|\n", ch, ret2);
	printf("---------------------------------------------------------------\n");

   return(0);
}