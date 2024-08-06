/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:53:51 by ktong             #+#    #+#             */
/*   Updated: 2024/03/13 16:44:08 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	neg;
	int	res;

	count = 0;
	res = 0;
	neg = 1;
	while (str[count] == '\t' || str[count] == '\n' || str[count] == '\v'
		|| str[count] == '\f' || str[count] == '\r' || str[count] == ' ')
		count ++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			neg = -1;
		count ++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		res = res * 10 + (str[count] - '0');
		count ++;
	}
	return (res * neg);
}
