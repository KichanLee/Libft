/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:46:58 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/08 17:46:10 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_toupper(int c)
{
	unsigned char	ch;

	ch = (unsigned char) c;
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return ((int) ch);
}

// int main(){
//     char str[20] = "abcdef";
//     int i = 0;
//     char ch;
//     while (str[i]){
//         putchar(ft_toupper(str[i]));
//         ++i;
//     }
//     return (0);
// }