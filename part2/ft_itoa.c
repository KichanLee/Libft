/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:21:31 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/08 21:23:09 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	ft_len(int n)
{
	long	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		++i;
	}
	while (n != 0)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;	
	long	i;
	long	n_size;
	long	l_n;

	l_n = (long) n;
	n_size = ft_len(n);
	str = malloc(n_size + 1);
	i = 0;
	if (!str)
		return (0);
	if (l_n == 0)
		str[0] = '0';
	if (l_n < 0)
	{
		str[0] = '-';
		l_n *= -1;
	}
	str[n_size] = '\0';
	while (l_n > 0)
	{
		str[--n_size] = l_n % 10 + '0';
		l_n /= 10;
	}
	return (str);
}

//int main()
//{
//	int num = 100;
//	int num2 = -123123;
//	int num3 = 1;
//	int num4 = 0;
//	int num5 = -2147483648;
//	int num6 = 2147483647;
//	printf("num itoa after : %s\n", ft_itoa(num));
//	printf("num2 itoa after : %s\n", ft_itoa(num2));
//	printf("num3 itoa after : %s\n", ft_itoa(num3));
//	printf("num4 itoa after : %s\n", ft_itoa(num4));
//	printf("num5 itoa after : %s\n", ft_itoa(num5));
//	printf("num6 itoa after : %s\n", ft_itoa(num6));
//}