/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 02:48:57 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/25 17:06:05 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (n-- > 1 && *s1 && (*s1 == *s2))
		(void)((unsigned long)(s1++) + (unsigned long)(s2++));
	return ((unsigned char )*s1 - (unsigned char)*s2);
}
