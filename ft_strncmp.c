/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:33:24 by kichlee           #+#    #+#             */
/*   Updated: 2022/11/26 12:37:24 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t t)
{
	size_t	s;

	s = 0;
	while ((*s1 && *s2) && t > s)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		++s1;
		++s2;
		--s;
	}
	return (0);
}

//#include<stdio.h>
//#include<string.h>

//int main(){

//    char *str1 = "ABCD";
//    char *str2 = "ABCDE";
//    char *str3 = "12345";
//    char *str4 = "aa1111";

//    printf("original fucntion : %d\n", strncmp(str1, str2,3));
//    printf("my own function : %d\n", ft_strncmp(str1, str2, 3));
//    printf("original fucntion %d\n", strncmp(str3, str4, 3));
//    printf("my own function : %d\n", ft_strncmp(str3, str4, 3));
//}