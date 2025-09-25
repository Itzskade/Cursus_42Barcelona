/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 23:07:48 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/08/10 09:48:30 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*mem;
	unsigned char	uc;

	mem = (unsigned char *)dest;
	uc = (unsigned char)c;
	while (n--)
		*mem++ = uc;
	return (dest);
}
