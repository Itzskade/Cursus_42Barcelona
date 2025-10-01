/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unbr_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:32:20 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/29 15:32:20 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		usnbr_count(unsigned int n)
{
	if (n < 10)
		return (1);
	return (1 + usnbr_count(n / 10));
}

char	*fill_usnbr(char *buffer, unsigned int n)
{
	if (n > 9)
		buffer = fill_usnbr(buffer, n / 10);
	*buffer++ = (n % 10) + '0';
	return (buffer);

}
char	*pf_utoa(unsigned int n)
{
	char	*buffer;
	char	*ptr;
	
	buffer = malloc(usnbr_count(n) + 1);
	if (!buffer)
		return (NULL);
	ptr = buffer;
	ptr = fill_usnbr(buffer, n);
	*ptr = '\0';
	return (buffer);
}
