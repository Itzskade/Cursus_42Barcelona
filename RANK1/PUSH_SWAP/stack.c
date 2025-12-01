#include "push_swap.h"

static int     check_range(char *str)
{
    long    n;
    
    n = ft_atol(str);
    if (n < INT_MIN || n > INT_MAX)
        return (write(1, "Error\n", 6), 0);
    return (1);
}

static int     check_duplicate(long *stack, int size)
{
   int  i;
   int  j;

   i = 0;
   while (i < size - 1)
   {
        j = i + 1;
        while (j < size)
        {
            if (stack[i] == stack[j])
                return (write(1, "Error\n", 6), 0);
            j++;
        }
        i++;
   }
   return (1);
}

long    *init_stack(int ac, char **av, int *size)
{
    char    **numbers;
    long    *stack;
    int     count;
    int     i;
    
    numbers = parse(ac, av);
    count = 0;
    while (numbers[count])
        count++;
    stack = malloc(sizeof(long) * count);
    if (!stack)
        return 0;
    i = -1;
    while (++i < count)
    {
        if (!check_range(numbers[i]))
            return (free(stack), free_all(numbers), 0);
        stack[i] = ft_atol(numbers[i]);
    }
    if (!check_duplicate(stack, count))
        return (free(stack), free_all(numbers), 0);
    free_all(numbers);
    *size = count;
    return (stack);
}

t_stack     *array_to_list(long *stack, int size)
{
    t_stack     *s;
    t_node      *node;
    int         i;

    s = malloc(sizeof(t_stack));
    if (!s)
        return NULL;
    s->top = NULL;
    s->size = 0;

    i = size - 1;
    while (i >= 0)
    {
        node = malloc(sizeof(t_node));
        if (!node)
            return NULL;
        node->value = stack[i];
        node->index = -1;
        node->next = s->top;
        s->top = node;
        s->size++;
        i--;
    }
    return s;
}
