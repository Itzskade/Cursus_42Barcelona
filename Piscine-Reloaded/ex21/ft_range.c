/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 01:42:23 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/22 01:56:14 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	*ptr;
	int	size;

	if (max <= min)
		return (NULL);
	size = max - min;
	array = malloc(sizeof(*array) * size);
	if (!array)
		return (0);
	ptr = array;
	while (min < max)
		*ptr++ = min++;
	return (array);
}
