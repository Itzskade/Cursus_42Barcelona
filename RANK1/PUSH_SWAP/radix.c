#include "push_swap.h"

void	assign_index(t_stack *a)
{
	t_node	*current;
	t_node	*cmp;
	int	i;

	current = a->top;
	while (current)
	{
		i = 0;
		cmp = a->top;
		while (cmp)
		{
			if (cmp->value < current->value)
				i++;
			cmp = cmp->next;
		}
		current->index = i;
		current = current->next;
	}
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int	bits;
	int	size;
	int	i;
	int	j;
	
	size = a->size;
	bits = 0;
	while ((size - 1) >> bits)
		bits++;
	assign_index(a);
	i = 0;
	while (i < bits)
	{
		j = size;
		while (j--)
			if ((a->top->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
		while (b->size)
			pa(a, b);
		i++;
	}
}
