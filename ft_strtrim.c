/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:47:42 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/16 23:18:53 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	st;
	size_t	end;
	size_t	i;
	char	*str;

	st = 0;
	end = ft_strlen(s1);
	i = 0;
	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	while (s1[st] && ft_strchr(set, s1[st]))
		++st;
	while (s1[end -1] && ft_strchr(set, s1[end - 1]))
		--end;
	if (st >= end)
		return (ft_strdup(""));
	str = (char *) malloc(end - st + 1);
	if (str == 0)
		return (0);
	ft_strlcpy(str, s1 + st, end - st + 1);
	return (str);
}
