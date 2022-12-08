/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:21:00 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/08 21:21:17 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int count_str(char const *str, char ch)
{
	int flag = 1;
	int cnt = 0;

	while(*str)
	{
		if(flag == 1 && (*str == ch))
		{
			flag = 0;
			cnt++;
		}
		if(flag == 0 && !(*str == ch))
			flag = 1;
		str++;
	}
	return cnt;
}
int ex_sep(const char *str, char ch)
{
	int	i = 0;

	while(str[i] && !(*str == ch))
		++i;
	return i;
}


char *put_word(const char *str, char ch)
{
	int len_word;
	int i ;
	char *word;

	i = 0;
	len_word = ex_sep(str, ch);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return word;
}

char **ft_split(char const *s, char c)
{
	int cnt = count_str(s, c);
	char **string;
	int i = 0;

	string = (char **)malloc(sizeof(char *) * (cnt + 1));

	if(!string)
		return 0;
	
	while (*s != '\0')
	{
		while(*s && (*s == c))
			s++;
		if(*s)
		{
			string[i] = put_word(s, c);
			i++;
		}
		while (*s && !(*s == c))
			s++;
	}
	string[i] = 0;

	return (0);

}
#include <stdio.h>
int main()
{
	int i = 0;

	char **sk;

	char str[] = "010-5706-5136-0847";


	printf("%d", count_str(str, '-'));


	sk = ft_split2(str, '-');

	while(sk[i])
	{
		printf("%s\n", sk[i]);
		i++;
	}
	return 0;
}