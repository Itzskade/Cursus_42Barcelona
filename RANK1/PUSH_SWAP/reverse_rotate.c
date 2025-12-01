#include "push_swap.h"

static void    reverse_rotate(t_node **stack)
{
    t_node  *tmp;
    t_node  *first;
    
    if(*stack && (*stack)->next)
    {
        first = *stack;
        while (first->next->next)
            first = first->next;
        tmp = first->next;
        first->next = NULL;
        tmp->next = *stack;
        *stack = tmp;
    }
}

void    rra(t_node **stack)
{
    reverse_rotate(stack);
    write(1, "rra\n", 4);
}

void    rrb(t_node **stack)
{
    reverse_rotate(stack);
    write(1, "rrb\n", 4);
}

void    rrr(t_node **a, t_node **b)
{
    reverse_rotate(a);
    reverse_rotate(b);
    write(1, "rrr\n", 4);
}