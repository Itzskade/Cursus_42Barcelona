/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:46:49 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/29 12:46:49 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_putchar(char c)
{
	write(1, &c, 1);
}

void	pf_pustr(char *str)
{
	while(*str)
		pf_putchar(*str++);
}

int		pf_strlen(const char *str)
{
	const char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return (ptr - str);
}

char	*pf_strdup(const char *s)
{
	char	*dup;
	char	*ptr;

	if (!s)
		return (NULL);
	dup = malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	ptr = dup;
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (dup);
}

char	*pf_strchr(const char *s, int c)
{
	unsigned char chr;

	chr = (unsigned char)c;
	if (!s)
		return (NULL);
	while (*s)
	{
		if(*s == chr)
			return (s);
		s++;
	}
	return (NULL);
}
