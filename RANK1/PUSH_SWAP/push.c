#include "push_swap.h"

static void    pa(t_node **a, t_node **b)
{
    t_node  *tmp;

    if (*b)
    {
        tmp = *b;
        *b = *b->next;
        tmp->next = *a;
        *a = tmp;
    }
    write(1, "pa\n", 3);
}

void    pb(t_node **a, t_node **b)
{
    t_node  *tmp;

    if (*a)
    {
        tmp = *a;
        *a = *a->next;
        tmp->next = *b;
        *b = tmp;
    }
    write(1, "pb\n", 3);
}