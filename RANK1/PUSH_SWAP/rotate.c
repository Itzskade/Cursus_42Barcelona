#include "push_swap.h"
#include <unistd.h>

static	void rotate(t_node **top)
{
	t_node	*tmp;
	t_node	*last;

	if (*top && (*top)->next)
	{
		tmp = *top;
		*top = (*top)->next;
		last = *top;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
	}
}

void	ra(t_stack *a)
{
	rotate(&a->top);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	rotate(&b->top);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(&a->top);
	rotate(&b->top);
	write(1, "rr\n", 3);
}

