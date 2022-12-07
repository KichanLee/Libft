#include <stdio.h>
#include <stdlib.h>


// data area
int g_num = 0;

int main()
{
	// data area
	static int s_num = 0;
	// stack
	int num = 0;
	// stack
	char *ptr = malloc(5); // ptr이 가르키는 영역은 heap
	// stack

	char *code = "code"; 
    // stack
	char codearr[10] = "code";


    printf("g_num :\t%p\n", &g_num);
	printf("s_num :\t%p\n", &s_num);
	printf("num :\t%p\n", &num);
	printf("ptr :\t%p\n", &ptr);
	printf("ptr(heap) :\t%p\n", ptr);
	printf("code :\t%p\n", &code);
	printf("code val :\t%p\n", code);
	printf("code addr :\t%p\n", "code");
	printf("code addr :\t%p\n", "code");

	char arr[10] = "abcde";
    
	char arr2[10];
	arr2[0] = 'a';
	arr2[1] = 'b';
	arr2[2] = 'c';
	arr2[3] = 'd';
	arr2[4] = 'e';
	arr2[5] = '\0';
	char* ptr2 = "abcde";
	printf("abcde addr :\t%p\n", "abcde");
	printf("arr addr :\t%p\n", &arr);
	printf("arr val :\t%p\n", arr);
	char str[10];
	//str = malloc(8);
}