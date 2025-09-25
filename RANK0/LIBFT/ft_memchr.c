/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 02:59:09 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/08/10 09:47:41 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	unsigned char	chr;
	unsigned char	*mem;

	mem = (unsigned char *)buf;
	chr = (unsigned char)c;
	while (count--)
	{
		if (*mem == chr)
			return ((void *)mem);
		mem++;
	}
	return (NULL);
}
