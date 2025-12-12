#include "push_swap.h"

static int	is_overflow(long result, int sign)
{
	if (sign == 1 && result > INT_MAX)
		return (1);
	if (sign == -1 && result > 2147483648L)
		return (1);
	return (0);
}

static long	ft_atol(const char *s, int *error)
{
	long    result;
	int     sign;
	int     i;

	sign = 1;
	result = 0;
	i = 0;
	*error = 0;
	while (ft_is_space(s[i]))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_is_digit(s[i]))
	{
		result = result * 10 + (s[i++] - '0');
		if (result > (long)INT_MAX + 1)
			return (*error = 1, 0);
	}
	if (s[i] != '\0' || is_overflow(result, sign))
		return (*error = 1, 0);
	return (sign * result);
}

static int	has_duplicate(t_stack *a, int n)
{
	t_node *tmp;

	tmp = a->top;
	while (tmp)
	{
		if (tmp->value == n)
			return 1;
		tmp = tmp->next;
	}
	return (0);
}

static int	fill_stack(t_stack *a, int ac, char **av)
{
	int	i;
	long	n;
	int	error;
	t_node	*node;

	i = 0;
	while (i < ac)
	{
		n = ft_atol(av[i], &error);
		if (error || has_duplicate(a, n))
			return (write(2, "Error\n", 6), 1);
		node = malloc(sizeof(t_node));
		if (!node)
			return (1);
		node->value = (int)n;
		node->next = a->top;
		a->top = node;
		a->size++;
		i++;
	}
	return (0);
}

int	parse_args(t_stack *a, int ac, char **av)
{
	char	**split;
	int	i;

	if (ac < 2)
		return (1);
	if (ac == 2)
	{
		split = ft_split(av[1]);
		i = 0;
		while (split[i])
			i++;
		if (i == 0 || fill_stack(a, i, split))
			return (free_split(split), 1);
		free_split(split);
	}
	else
	{
		if (fill_stack(a, ac - 1, av + 1))
			return (1);
	}
	return (0);
}
