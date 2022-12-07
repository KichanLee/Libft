/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:00:40 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/07 20:40:38 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char change(unsigned int num, char a)
{
	char ch = 'c';
	return ch;
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(strlen(s) + 1);

	if(!str)
		return (0);
	if(!f)
		return (0);
	while (i < strlen(s))
	{
		str[i] = f(i, s[i]);
		++i;
	}
	str[i] = '\0';
	
	return (str);
}
#include <stdio.h>
int	main()
{
	char *str = "leekichan";
	char *test;
	int i = 0;
	char ch = 'a';
	char (*f)(unsigned int, char)= change;
	
	printf("f function :%c\n", (*f)(i, ch));
	
	printf("test : %s", test);
}