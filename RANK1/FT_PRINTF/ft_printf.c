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

int		ft_format(char format, va_list ap)
{
	if (format == 'c')
		return (ft_printf_c(va_arg(ap, int)));
	if (format == 's')
		return (ft_printf_s(va_arg(ap, char *)));
	if (format == 'd' || c == 'i')
		return (ft_printf_d(va_arg(ap, int)));
	if (format == 'u')
		return (ft_printf_u(va_arg(ap, unsigned int)));
	if (format == 'x')
		return (ft_printf_x(va_arg(ap, unsigned int), 0));
	if (format == 'X')
		return (ft_printf_x(va_arg(ap, unsigned int), 1));
	if (format == 'p')
		return (ft_printf_p(va_arg(ap, void *)));
	if (format == '%')
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
			len += ft_printf_c(*format);
		format++;
	}
	va_end(ap);
	return(len);
}
