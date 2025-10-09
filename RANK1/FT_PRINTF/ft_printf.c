/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:22:11 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/09 15:23:35 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char format, va_list ap)
{
	if (format == '\0')
		return (-1);
	else if (format == 'c')
		return (ft_printf_c(va_arg(ap, int)));
	else if (format == 's')
		return (ft_printf_s(va_arg(ap, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_printf_d(va_arg(ap, int)));
	else if (format == 'u')
		return (ft_printf_u(va_arg(ap, unsigned int)));
	else if (format == 'x')
		return (ft_printf_x(va_arg(ap, unsigned int), 0));
	else if (format == 'X')
		return (ft_printf_x(va_arg(ap, unsigned int), 1));
	else if (format == 'p')
		return (ft_printf_p(va_arg(ap, void *)));
	else
		return (ft_printf_c('%'));
}

int	ft_printf(char const *format, ...)
{
	int		len;
	int		ret;
	va_list	ap;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ret = ft_format(*format, ap);
			if (ret < 0)
				return (ret);
			len += ret;
		}
		else
			len += ft_printf_c(*format);
		format++;
	}
	va_end(ap);
	return (len);
}
