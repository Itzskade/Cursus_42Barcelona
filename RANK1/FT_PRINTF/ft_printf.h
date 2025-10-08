/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:22:52 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/06 15:07:45 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

/* +=====================+
 * |     ft_printf.c     |
 * +=====================+ */

int		ft_format(char c, va_list ap);
int		ft_printf(char const *format, ...);

/* +=====================+
 * |  ft_printf_utils.c  |
 * +=====================+ */

int		ft_printf_c(char c);
int		ft_printf_s(char *s);
int		ft_printf_d(int d);
int		ft_printf_u(unsigned int u);

/* +=====================+
 * | ft_printf_utils2.c  |
 * +=====================+ */

int		ft_printf_x(unsigned int x, int up);
int		ft_printf_p(void* p);

#endif
