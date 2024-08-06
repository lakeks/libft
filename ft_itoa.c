/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:38:17 by ktong             #+#    #+#             */
/*   Updated: 2024/03/22 12:48:47 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	put_nbr_str(char *str, size_t len, long nbr, int sign)
{
	str[len] = '\0';
	while (len --)
	{
		str[len] = ((nbr * sign) % 10) + '0';
		nbr /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	long	nbr;

	len = 1;
	sign = 1;
	if (n < 0)
	{
		sign *= -1;
		len++;
	}
	nbr = n;
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	put_nbr_str(str, len, nbr, sign);
	return (str);
}
