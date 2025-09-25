/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:25:34 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/25 11:47:19 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	char	chr;

	chr = char(c);
	while (*s)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}

int	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return (ptr - str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		len;
	char	*buffer;
	char	*ptr;

	len = ft_strlen(s1) + ft_strlen(s2);
	
	buffer = malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	ptr = buffer;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr + '\0';
	return (buffer);
}

char	*ft_strdup(char	*str)
{
	char	*dup;
	char	*ptr;

	if (!str)
		return (NULL);
	dup = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dup)
		return (NULL);
	ptr = dup;
	while (*str)
		*ptr++ = *str++;
	*ptr = '\0';
	return (dup);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	end;

	end = ft_strlen(s);
	if (end >= start)
	
}
		
