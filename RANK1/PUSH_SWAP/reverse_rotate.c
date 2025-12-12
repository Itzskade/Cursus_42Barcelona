#include "push_swap.h"

static void	reverse_rotate(t_node **top)
{
	t_node	*tmp;
	t_node	*first;

	if (*top && (*top)->next)
	{
		first = *top;
		while (first->next->next)
			first = first->next;
		tmp = first->next;
		first->next = NULL;
		tmp->next = *top;
		*top = tmp;
	}
}

void	rra(t_stack *a)
{
	reverse_rotate(&a->top);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	reverse_rotate(&b->top);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(&a->top);
	reverse_rotate(&b->top);
	write(1, "rrr\n", 4);
}

