#include "push_swap.h"

static size_t     countwords(char *s)
{
	size_t     count;

	count = 0;
	while (*s)
	{
		while (*s && ft_is_space(*s))
			s++;
		if (*s)
			count++;
		while (*s && !ft_is_space(*s))
			s++;
	}
	return (count);
}

static char	*ft_strndup(char *s, int size)
{
	char	*dup;
	char	*ptr;

	if (!s)
		return (NULL);
	dup = malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (NULL);
	ptr = dup;
	while (size--)
		*ptr++ = *s++;
	*ptr = '\0';
	return (dup);
}

char    **ft_split(char *s)
{
	char	**ptr;
	char	**arr;
	char	*start;

	arr = malloc((countwords(s) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	ptr = arr;
	while (*s)
	{
		while (*s && ft_is_space(*s))
			s++;
		start = s;
		while (*s && !ft_is_space(*s))
			s++;
		*ptr = ft_strndup(start, s - start);
		if (!*ptr)
			return (free_split(arr), NULL);
		ptr++;
	}
	*ptr = NULL;
	return (arr);
}
