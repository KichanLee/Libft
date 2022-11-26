/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:41:12 by kichlee           #+#    #+#             */
/*   Updated: 2022/11/26 13:27:59 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>



void * ft_memset(void *b, int n, size_t length){

    size_t i;

    i = 0;

    while(i < length){
       ((char *)b)[i] = n;
       i++;
    }

    return (b);
}
/**
 * 
 * void 형으로 들어오는게 int일수도 char * 형일수도 있는데?
 * 넣어주는 값은 어떤 걸로 해주는 거지
 * /
 * 
*/


int main(){


    char buffer[30];
    
    char *string =  "aaaaaaaa";
    char *string2 = "abcdef";

    char *string3 = "12345";

    string = (char *) ft_memset(buffer, 'A', 10);

    string2 = string3;
    
    printf("%s",string2);
}