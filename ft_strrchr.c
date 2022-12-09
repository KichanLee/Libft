/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:50:35 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/08 17:46:53 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*cp;
    int     i;

	cp =  (char *) s;
    i = 0; 
	while (*cp)
	{
		cp++;
	}
    --cp;
    while (cp[i])
    {
        if(cp[i] == (unsigned char) c)
        {
            return((char *)&cp[i]);
        }
        --i;
    }
	return (0);
}

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30] = "A Garden Diary";
    char s2[10] = " ";
    
    char *ptr = strrchr(s1, 'a');
	char *ptr1 = ft_strrchr(s1, 'a');
	char *ptr2 = strrchr(s1, 'Z');
	char *ptr3 = ft_strrchr(s1, 'Z');
    char *ptr4 = strrchr(s2, ' ');
    char *ptr5 = ft_strrchr(s2, ' ');

    printf("%s\n", ptr);   // ary
	printf("%s\n", ptr1); // ary
	printf("%s\n", ptr2); // null
	printf("%s\n", ptr3); // ' '
    printf("%s\n", ptr4); // ' '
    printf("%s\n", ptr5); // ' '

    return 0;
}