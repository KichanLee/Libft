/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:56:08 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/12 16:26:40 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>

void	*ft_calloc(size_t c, size_t s)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(c * s);
	if (!ptr)
		return (0);
	while (i < (c * s))
	{
		((unsigned char *)ptr)[i] = 0;
		++i;
	}
	return (ptr);
}

int main(){
	int size = 3;
	int *arr;
	arr = (int *)ft_calloc(5, sizeof(int));
	for(int i = 0; i < 5; ++i)
	{
		printf("\n");
		printf("before allocation : %d\n", arr[i]);
		arr[i] = i;
		printf("after allocation : %d\n ", arr[i]);
	}
}