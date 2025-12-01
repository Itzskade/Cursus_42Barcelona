#include "push_swap.h"

static void    rotate(t_node **stack)
{
    t_node  *tmp;
    t_node  *last;

    if (*stack && (*stack)->next)
    {
        tmp = *stack;
        *stack = (*stack)->next;
        last = *stack;
        while (last->next)
            last = last->next;
        last->next = tmp;
        tmp->next = NULL;
    }
}

void    ra(t_node **stack)
{
    rotate(stack);
    write(1, "ra\n", 3);
}

void    rb(t_node **stack)
{
    rotate(stack);
    write(1, "rb\n", 3);
}

void    rr(t_node **a, t_node **b)
{
    rotate(a);
    rotate(b);
    write(1, "rr\n", 3);
}
