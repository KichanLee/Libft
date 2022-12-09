/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:41:12 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/07 21:09:46 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int n, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		((unsigned char *)b)[i] = (unsigned char) n;
		i++;
	}
	return (b);
}

//int main(){
//	char buffer[10];
//	char buffer2[10];
//	char *string =  "aaaaaaaa";
//	char *string2 = "abcdef";
//	char *string3 = "12345";
//	string = (char *) ft_memset(buffer, -15, 10);
//	string2 = (char *) memset(buffer2, -15, 10);
//	printf("string : %s\n",string);
//	printf("string2 : %s\n",string2);
//}