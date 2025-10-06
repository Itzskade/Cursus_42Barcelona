/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:22:11 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/06 14:25:03 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_format(char c, va_list ap)
{
	if (c == 'c')
		return (ft_printf_c(va_arg(ap, int)));
	if (c == 's')
		return (ft_printf_s(va_arg(ap, char *)));
	if (c == 'd' || c == 'i')
		return (ft_printf_di(va_arg(ap, int)));
	if (c == 'u')
		return (ft_printf_u(va_arg(ap, unsigned int)));
	if (c == 'x')
		return (ft_printf_x(va_arg(ap, unsigned int), 0));
	if (c == 'X')
		return (ft_printf_x(va_arg(ap, unsigned int), 1));
	if (c == 'p')
		return (ft_printf_p(va_arg(ap, void *)));
	if (c == '%')
		return (ft_printf_c('%'));
	return (0);
}

int		ft_printf(char const *format, ...)
{
	int		len;
	va_list	ap;
	
	len = 0;
	va_start(ap, format);
	while(*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			len += ft_format(*format, ap);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return(len);
}
