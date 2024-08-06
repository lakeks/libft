/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:34:17 by ktong             #+#    #+#             */
/*   Updated: 2024/03/18 12:38:33 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	st;

	str = (unsigned char *)s;
	st = (unsigned char)c;
	while (n--)
	{
		if (*str == st)
			return (str);
		str++;
	}
	return (NULL);
}
