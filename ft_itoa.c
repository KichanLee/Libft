/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:21:31 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/14 13:58:33 by kichlee          ###   ########.fr       */
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
