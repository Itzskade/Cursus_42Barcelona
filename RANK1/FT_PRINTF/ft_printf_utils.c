/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:33:19 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/06 15:07:30 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_c(char c)
{
	return (write(1, &c, 1));
}

int		ft_printf_s(char *s)
{
	int 	i;
	int 	count;

	if (!s)
		return (ft_printf_s("(null)"));
	i = 0;
	count = 0;
	while (s[i])
		count += ft_printf_c(s[i++]);
	return (count);
}

int		ft_printf_d(int d)
{
	int		count;
	long	l;
	char	c;
	
	l = d;
	count = 0;
	if (l < 0)
	{
		count += write(1, "-", 1);
		l = -l;
	}
	if (l > 9)
		count += ft_printf_d(l / 10);
	c = (l % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

int		ft_printf_u(unsigned int u)
{
	int 	count;
	char	c;
	
	count = 0;
	if (u > 9)
		count += ft_printf_u(u / 10);
	c = (u % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
