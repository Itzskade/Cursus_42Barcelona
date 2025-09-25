/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 00:51:08 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/23 00:55:03 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	char	*ptr;

	src_len = ft_strlen(src);
	ptr = dest;
	if (size == 0)
		return (src_len);
	while (--size > 0 && *src)
		*ptr++ = *src++;
	*ptr = '\0';
	return (src_len);
}
