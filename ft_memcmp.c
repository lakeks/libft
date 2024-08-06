/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:41:38 by ktong             #+#    #+#             */
/*   Updated: 2024/03/18 12:47:29 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*str1 != *str2)
			return (*(unsigned char *)(str1) - *(unsigned char *)(str2));
		str1++;
		str2++;
		++i;
	}
	if (i != n)
		return (*(unsigned char *)(str1) - *(unsigned char *)(str2));
	return (0);
}
