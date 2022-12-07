/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:25:42 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/07 19:49:44 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

// int main(){

//	 char str2[10] = "123456789";
//	 char str3[10] = "abcdefg";
//	 char *str4 =  "asfv";

//	ft_bzero(str2, 7);
//	//bzero(str2, 7);
//	printf("%c", str2[8]);
// }