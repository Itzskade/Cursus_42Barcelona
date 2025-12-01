#include "push_swap.h"

void    swap(t_list **stack)
{
    int tmp_value;
    int tmp_index;

    if (*stack == NULL || (*stack)->next == NULL)
        return ;
    tmp_value = (*stack)->value;
    tmp_index = (*stack)->index;
    (*stack)->value = (*stack)->next->value;
    (*stack)->index = (*stack)->next->index;
    (*stack)->next->value = tmp_value;
    (*stack)->next->index = tmp_index;
}

void    sa(t_list **stack)
{
    swap(stack);
    write(1, "sa\n", 3);
}

void    sb(t_list **stack)
{
    swap(stack);
    write(1, "sb\n", 3);
}

void    ss(t_list **a, t_list **b)
{
    swap(a);
    swap(b);
    write(1, "ss\n", 3);
}