/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:33:24 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/12 16:14:43 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t t)
{
	size_t	s;

	s = 0;
	while ((*s1 && *s2) && t > s)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		++s1;
		++s2;
		--s;
	}
	return (0);
}
