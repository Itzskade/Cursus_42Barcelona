#include "push_swap.h"

int	ft_is_space(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

int	ft_is_digit(int c)
{
	return (c >= '0' && c <= '9');
}

void	free_stack(t_stack *stack)
{
	t_node *tmp;

	while (stack->top)
	{
		tmp = stack->top;
		stack->top = stack->top->next;
		free(tmp);
	}
	stack->size = 0;
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}
