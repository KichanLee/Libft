/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:50:52 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/08 18:07:53 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	str = malloc(len + 1);
	i = 0;
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

//int main()
//{
//	const char *str1 = "abcde";
//	const char *str2 = "123456";
//	const char *str3 = NULL;
//	char *test1 = ft_substr(str1, 2, 4);
//	char *test2 = ft_substr(str2, 1, 18);
//	char *test3 = ft_substr(str3, 1, 18);
//	printf("test1 : %s\n", test1);
//	printf("test2 : %s\n", test2);
//	printf("test3 : %s\n", test3);
//}