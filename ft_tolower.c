/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:14:42 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/12 15:33:12 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char	ch;

	ch = (unsigned char) c;
	if (ch >= 'A' && ch <= 'Z')
	{
		ch += 32;
	}
	return ((int) ch);
}

 int main(){
     char str[20] = "ABCDEF";
     int i = 0;
     char ch;
     while (str[i]){
         putchar(ft_tolower(str[i]));
         ++i;
     }
     return (0);
 }