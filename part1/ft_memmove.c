/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:14:54 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/07 21:20:54 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	void	*buffer;
	size_t	i;

	buffer = dst;
	i = 0;
	while (i < len)
	{
		((char *)buffer)[i] = ((char *)src)[i];
		++i;
	}
	return (buffer);
}

//int main(){
//	int src1[] = {7,6,5,4,3,2,1};
//	int test[7];
//	ft_memmove(test, src1, sizeof(src1));
//	for(int i = 0; i < 7; ++i){
//		printf("%d ", src1[i]);
//	}
//	printf("\n");
	// for(int i = 0; i < 7; ++i){
	//     printf("%d ", test[i]);
	// }
	// printf("\n");
	// char src[] = "BlockDMask";
	// char dest1[] = "fffffdddddzzzzz";
	// char dest2[] = "fffffdddddzzzzz";
	// char dest3[] = "fffffdddddzzzzz";
	// // 메모리 복사1 : src 길이만큼만 복사
	// memmove(dest1, src, sizeof(char) * 10);
	// // 메모리 복사2 : src 길이 + 1 만큼 복사
	// memmove(dest2, src, sizeof(char) * 10 + 1);
	// // 메모리 복사3 : 메모리 일부 복사
	// memmove(dest3 + 10, src, sizeof(char) * 3);
	// // source
	// printf("src  : %s\n", src);
	// // destination
	// printf("dest1 : %s\n", dest1);
	// printf("dest2 : %s\n", dest2);
	// printf("dest3 : %s\n", dest3);
	// char str3[] = "BlockDMask";
	// // 메모리 복사 : 메모리 겹침
	// memmove(str3, str3 + 2, sizeof(char) * 4);
	// // source
	// printf("src3  : %s\n", str3);
//}