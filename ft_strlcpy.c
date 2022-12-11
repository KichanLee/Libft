/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:04:39 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/11 23:58:38 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	t_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t		i;

	i = 0;
	src_len = t_strlen(src);
	while ((i + 1 < size) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (t_strlen(src));
}

#include <string.h>
#include <stdio.h>
int main()
{
	char *src1 ="1234567";
	char dst1[10];
	char *src2 ="1234567";
	char dst2[10];
	printf("my function : %lu\n", ft_strlcpy(dst1, src1, 4));
	printf("origianl function : %lu\n", strlcpy(dst1, src1, 4));
	printf("my function : %s\n", dst1);	
	printf("original function :%s\n", dst1);	
}