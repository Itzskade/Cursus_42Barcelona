/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:58:16 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/06 13:53:21 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_x(unsigned int x, int up)
{
	char	*base;
	char	c;
	int		count;

	base = "0123456789abcdef";
	if (up)
		base = "0123456789ABCDEF";
	count = 0;
	if (x >= 16)
		count += ft_printf_x(x / 16, up);
	c = base[x % 16];
	count += ft_printf_c(c);
	return (count);
}

int		ft_printf_p(void *p)
{
	int		count;

	count = 0;
	if (!p)
		return (ft_printf_s("(nil)"));
	count += ft_printf_s("0x");
	count += ft_printf_x((size_t)p, 0);
	return (count);
}
