/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:14:36 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/08 17:50:38 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

size_t	ft_strlen(const char *ch)
{
	size_t	i;

	i = 0;
	while (ch[i])
		++i;
	return (i);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t l)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && i < l)
	{
		if (s1[i] == s2[j])
			++j;
		else
			j = 0;
		++i;
		if (len == j)
			return ((char *)&s1[i - len]);
	}
	return (0);
}

//int main()
//{
//	char *str1 = "abababcde";
//	char *str2 = "de";
//	char *str3 = "abcdefg";
//	char *str4 = "123";
//	 char str5[100] = "lorem ipsum dolor sit amet";
//    char str6[10] = "lorem";
//	printf("origianl function : %s\n", strnstr(str1, str2, 0));
//	printf("my       function : %s\n", ft_strnstr(str1, str2, 0));
//	printf("origianl function : %s\n", strnstr(str3, str4, 3));
//	printf("my       function : %s\n", ft_strnstr(str3, str4, 3));
//	printf("origianl function : %s\n", strnstr(str5, str6, 15));
//	printf("my       function : %s\n", ft_strnstr(str5, str6, 15));
//}