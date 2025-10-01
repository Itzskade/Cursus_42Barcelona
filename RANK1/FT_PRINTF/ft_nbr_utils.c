/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:07:27 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/29 13:07:27 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nbr_count(int n)
{
	if (n < 0)
		return (1 + nbr_count(-n));
	if (n < 10)
		return (1);
	return (1 + nbr_count(n / 10));
}

char	*fill_number(char *buffer, long nb)
{
	if (nb < 0)
	{
		*buffer++ = '-';
		nb = -nb;
	}
	if (nb > 9)
		buffer = fill_number(buffer, nb / 10);
	*buffer++ = (nb % 10) + '0';
	return (buffer);
}

char	*pf_itoa(int n)
{
	char	*buffer;
	char	*ptr;
	int		len;
	
	len = nbr_count(n);
	buffer = malloc(len + 1);
	if (!buffer)
		return (NULL);
	ptr = fill_number(buffer, (long)n);
	*ptr = '\0';
	return (buffer);
}
