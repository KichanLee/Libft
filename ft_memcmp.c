/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:49:44 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/12 16:10:02 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t s)
{
	size_t	i;

	i = 0;
	while (((char *)ptr1)[i] && ((char *)ptr2)[i] && i < s)
	{
		if (((char *)ptr1)[i] != ((char *)ptr2)[i])
		{
			return (((char *)ptr1)[i] - ((char *)ptr2)[i]);
		}
		++i;
	}
	return (0);
}
