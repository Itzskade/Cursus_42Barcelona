/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 01:55:24 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/08/10 09:48:55 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	chr;
	char	*last_occ;

	chr = (char)c;
	last_occ = NULL;
	while (*str)
	{
		if (*str == chr)
			last_occ = (char *)str;
		str++;
	}
	if (!chr)
		return ((char *)str);
	return (last_occ);
}
