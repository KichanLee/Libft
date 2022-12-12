/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:50:35 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/12 15:53:41 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*cp;
	int		i;

	cp = (char *) s;
	i = 0;
	while (*cp)
	{
		cp++;
	}
	--cp;
	while (cp[i])
	{
		if (cp[i] == (unsigned char) c)
		{
			return ((char *)&cp[i]);
		}
		--i;
	}
	return (0);
}
