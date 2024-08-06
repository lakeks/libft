/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:24:30 by ktong             #+#    #+#             */
/*   Updated: 2024/03/18 12:28:09 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)(s1) - *(unsigned char *)(s2));
		s1++;
		s2++;
		++i;
	}
	if (i != n)
		return (*(unsigned char *)(s1) - *(unsigned char *)(s2));
	return (0);
}
