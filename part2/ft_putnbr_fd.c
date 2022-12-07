/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:34:40 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/07 17:01:37 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

long ft_len(int n)
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

	if(!str)
		return (0);
	if(l_n == 0)
		str[0] = '0';
	if(l_n < 0)
	{
		str[0] = '-';
		l_n *= -1;
	}
	str[n_size] = '\0';
	while (l_n > 0)
	{
		str[--n_size] =  l_n % 10 + '0';
		l_n /= 10;
	}

	return (str);
}


void ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	write(fd,str,sizeof(str) + 1);
	write(fd, "\n", 1);
}

int main()
{
	int num = 123214145;
	ft_putnbr_fd(num, 1);
}