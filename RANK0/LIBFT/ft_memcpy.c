/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 23:56:13 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/08/10 09:48:09 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char		*mem;
	const unsigned char	*ptr;

	mem = (unsigned char *)dest;
	ptr = (const unsigned char *)src;
	while (count--)
		*mem++ = *ptr++;
	return (dest);
}
