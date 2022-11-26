/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:23:18 by kichlee           #+#    #+#             */
/*   Updated: 2022/11/16 21:50:55 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cp;

	cp = (char *) s;
	i = 0;
	while (*cp)
	{
		if (*cp == (unsigned char) c)
		{
			return (cp);
		}
		++cp;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char s1[30] = "A Garden Diary";

//    char *ptr = strchr(s1, 'a');
//	char *ptr1 = ft_strchr(s1, 'a');
//	char *ptr2 = strchr(s1, 'Z');
//	char *ptr3 = ft_strchr(s1, 'Z');

//    printf("%s\n", ptr);   // ary
//	printf("%s\n", ptr1); // ary
//	printf("%s\n", ptr2); // null
//	printf("%s\n", ptr3); // null

//    return 0;
//}