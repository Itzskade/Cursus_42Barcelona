/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:13:59 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/19 01:31:09 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#define MAX_DIGITS 12
int	len_num(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
		return (1 + len_num(-nb));
	if (nb < 10)
		return (1);
	return (1 + len_num(nb / 10));
}

char	*fill_num(char *str, int n)
{
	if (n < 0)
	{
		*str++ = '-';
		n = -n;
	}
	if (n > 9)
		str = fill_num(str, n / 10);
	*str++ = ((n % 10) + '0');
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(len_num(n) + 1);
	if (!str)
		return (NULL);
	ptr = fill_num(str, n);
	*ptr = '\0';
	return (str);
}
