/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktong <ktong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:51:52 by ktong             #+#    #+#             */
/*   Updated: 2024/04/26 14:56:37 by ktong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static size_t	str_len(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*str_ptr;

	if (!s)
		return (NULL);
	if (start > str_len(s))
		len = 0;
	else if (len > (str_len(s) - start))
		len = str_len(s) - start;
	str = str_new(len);
	if (!str)
		return (NULL);
	s += start;
	str_ptr = str;
	(*(str + len)) = '\0';
	while (len -- && *s)
		*str++ = *s++;
	return (str_ptr);
}
