/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 05:22:28 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/08/10 09:46:19 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*ptr;
	unsigned char	*buf;
	size_t			total_size;

	total_size = num * size;
	buf = malloc(sizeof(*buf) * (total_size));
	if (!buf)
		return (NULL);
	ptr = buf;
	while (total_size--)
		*ptr++ = '\0';
	return ((void *)buf);
}
