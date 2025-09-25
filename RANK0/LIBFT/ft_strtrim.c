/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 08:01:58 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/08/10 08:47:40 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buf;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	buf = malloc(sizeof(*buf) * (len + 1));
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, s1 + start, len + 1);
	return (buf);
}
