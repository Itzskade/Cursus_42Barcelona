#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node *tmp;

	if (!b->top)
		return;
	tmp = b->top;
	b->top = b->top->next;
	tmp->next = a->top;
	a->top = tmp;
	a->size++;
	b->size--;
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	t_node *tmp;

	if (!a->top)
		return;
	tmp = a->top;
	a->top = a->top->next;
	tmp->next = b->top;
	b->top = tmp;
	a->size--;
	b->size++;
	write(1, "pb\n", 3);
}

