#include "push_swap.h"

static void    swap(t_node **top)
{
	int	tmp_value;
	int	tmp_index;

	if (*top == NULL || (*top)->next == NULL)
		return ;
	tmp_value = (*top)->value;
	tmp_index = (*top)->index;
	(*top)->value = (*top)->next->value;
	(*top)->index = (*top)->next->index;
	(*top)->next->value = tmp_value;
	(*top)->next->index = tmp_index;
}

void    sa(t_stack *a)
{
	swap(&a->top);
	write(1, "sa\n", 3);
}

void    sb(t_stack *b)
{
	swap(&b->top);
	write(1, "sb\n", 3);
}

void    ss(t_stack *a, t_stack *b)
{
	swap(&a->top);
	swap(&b->top);
	write(1, "ss\n", 3);
}
