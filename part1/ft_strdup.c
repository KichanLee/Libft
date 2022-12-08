/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:52:22 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/08 17:52:50 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*str;
	int		i;

	i = 0;
	len = 0;
	while (s1[len])
		++len;
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	while (*s1)
	{
		*str = *s1;
		s1++;
		str++;
	}
	while (len--)
		--str;
	return (str);
}

//int main()
//{
//	char *test = "kichan";
//	char *test1 = 0;
	//	char *str1 = strdup(test);
//	char *str2 = ft_strdup(test);
//	char *str3 = strdup(test1);
//	char *str4 = ft_strdup(test1);
//	printf("origianl function : %s\n",str1);
//	printf("my		 function : %s\n", str1);
//	printf("origianl function : %s\n",str2);
//	printf("my		 function : %s\n", str2);
//}