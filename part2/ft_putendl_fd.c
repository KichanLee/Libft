/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:27:18 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/07 16:33:33 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, sizeof(s) + 1);
	write(fd, "\n", 1);
}

int main()
{
	char *str = "leekichan";

	ft_putendl_fd(str, 1);
}