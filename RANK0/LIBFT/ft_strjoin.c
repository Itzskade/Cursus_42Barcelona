/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 07:43:27 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/08/10 09:49:53 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*buf;

	len = ft_strlen(s1) + ft_strlen(s2);
	buf = malloc(sizeof(*buf) * (len + 1));
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, s1, len + 1);
	ft_strlcat(buf, s2, len + 1);
	return (buf);
}
