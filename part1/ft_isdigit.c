/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kichlee <kichlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:34:08 by kichlee           #+#    #+#             */
/*   Updated: 2022/12/07 17:53:30 by kichlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int digit)
{	
	if (digit >= '0' && digit <= '9')
		return (1);
	return (0);
}
