/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:52:22 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/14 18:14:09 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*str;
	int		i;

	i = 0;
	len = 0;
	while (s1[len])
		++len;
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	while (*s1)
	{
		*str = *s1;
		s1++;
		str++;
	}
	*str = '\0';
	while (len--)
		--str;
	return (str);
}
