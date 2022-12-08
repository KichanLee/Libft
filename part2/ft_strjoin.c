/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:38:54 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/08 18:08:09 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		t_len;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	t_len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(t_len + 1);
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		++i;
	}
	while (i < t_len)
	{
		str[i] = s2[j];
		++i;
		++j;
	}
	str[i] = '\0';
	return (str);
}

//int main()
//{
//	char *str1 = "abcde"; 
//	char *str2 = "12345";
//	char *test1 = ft_strjoin(str1, str2);
//	printf("%s", test1);
//}