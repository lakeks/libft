/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:14:26 by ktong             #+#    #+#             */
/*   Updated: 2024/03/13 13:13:31 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		count;
	char	*b;

	count = 0;
	b = (char *)s;
	while (b[count])
	{
		if (b[count] == (unsigned char)c)
			return (b + count);
		count ++;
	}
	if (b[count] == (unsigned char)c)
		return (b + count);
	return (NULL);
}
