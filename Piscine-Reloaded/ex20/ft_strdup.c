/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 01:35:34 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/22 01:41:49 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return (ptr - str);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	char	*dup;
	int		len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dup = malloc(sizeof(*dup) * (len + 1));
	if (!dup)
		return (NULL);
	ptr = dup;
	while (*src)
		*ptr++ = *src++;
	*ptr = '\0';
	return (dup);
}
