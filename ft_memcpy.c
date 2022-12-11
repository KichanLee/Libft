/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:50:58 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/11 15:00:18 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		++i;
	}
	return (dst);
}

//int main ()
//{
//	char str1[] = "123456789";
//	char str2[] = "abcdefghig";

//	memcpy(str2, str1, strlen(str1));
//	printf("original memcpy function : %s\n", str2);

//	char str3[] = "123456789";
//	char str4[] = "abcdefghig";

//	ft_memcpy(str4, str3, strlen(str1));
//	printf("my ft_memcpy function : %s\n", str4);
//	return 0;
//}