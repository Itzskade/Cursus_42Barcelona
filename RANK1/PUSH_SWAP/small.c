#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->top;
	while (tmp && tmp->next)
		if (tmp->value > tmp->next->value)
			return (0);
		else
			tmp = tmp->next;
	return (1);
}

void sort_three(t_stack *a)
{
	int first;
	int second;
	int third;

	first = a->top->value;
	second = a->top->next->value;
	third = a->top->next->next->value;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}


void	sort_small(t_stack *a, t_stack *b)
{
	if (a->size == 2 && a->top->value > a->top->next->value)
		sa(a);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size <= 5)
	{
		while (a->size > 3)
			pb(a, b);
		sort_three(a);
		while (b->size)
			pa(a, b);
	}
}
