/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:05:40 by ktong             #+#    #+#             */
/*   Updated: 2024/03/14 11:25:37 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	e;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	if (!len)
		return (NULL);
	while (haystack[i] && i < len)
	{
		e = 0;
		while (needle[e] && haystack[i + e] == needle[e] && i + e < len)
			e++;
		if (!needle[e])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
