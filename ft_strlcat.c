/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:11:00 by ktong             #+#    #+#             */
/*   Updated: 2024/03/16 12:58:07 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_len(const char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_len(dst, maxlen);
	if (dstlen == maxlen)
		return (maxlen + srclen);
	if (srclen < maxlen - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, (maxlen - dstlen) - 1);
		dst[maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
}
