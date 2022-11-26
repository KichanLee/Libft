/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:20:54 by kichlee           #+#    #+#             */
/*   Updated: 2022/11/26 16:42:20 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				res;
	int				minus;

	i = 0;
	res = 0;
	minus = 1;
	while ((str[i] >= 9 && str[i] <= 13) && str[i] == 32)
		++i;
	if(str[i] == '+')
		++i;
	else if(str[i] == '-')
	{
		++i;
		minus *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *=  10;
		res += str[i] - '0';
		++i;
	}
	return (res * minus);
	
}

int main()
{
	const char *str = "1235215";
	const char *str2 = "-1243014";
	const char *str3 = "000";

	printf("original function : %d\n", atoi(str));
	printf("my		 function : %d\n", ft_atoi(str));
	printf("original function : %d\n", atoi(str2));
	printf("my		 function : %d\n", ft_atoi(str2));
	printf("original function : %d\n", atoi(str3));
	printf("my		 function : %d\n", ft_atoi(str3));
}