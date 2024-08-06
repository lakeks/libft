/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:01:52 by ktong             #+#    #+#             */
/*   Updated: 2024/03/13 13:14:06 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*b;

	b = (char *)s;
	count = 0;
	while (b[count])
		count ++;
	while (count >= 0)
	{
		if (b[count] == (unsigned char)c)
			return (b + count);
		count --;
	}
	return (NULL);
}
