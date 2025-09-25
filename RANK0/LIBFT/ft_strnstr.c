/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 03:40:58 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/08/10 09:56:38 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t count)
{
	size_t		remaining;
	const char	*h;
	const char	*n;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && count)
	{
		h = haystack;
		n = needle;
		remaining = count;
		while (remaining-- && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
			return ((char *)haystack);
		haystack++;
		count--;
	}
	return (NULL);
}
/*
char	*strnstr(const char *haystack, const char *needle, size_t count)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && count)
	{
		i = 0;
		while (i < count && needle[i] && haystack[i] == needle[i])
			i++;
		if (!needle[i])
			return ((char *)haystack);
		haystack++;
		count--;
	}
	return (NULL);
}
*/
