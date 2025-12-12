#include "push_swap.h"

static void	run_sort(t_stack *a, t_stack *b)
{
	if (is_sorted(a))
		return ;
	if (a->size <= 5)
		sort_small(a, b);
	else
		radix_sort(a, b);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	a.top = NULL;
	a.size = 0;
	b.top = NULL;
	b.size = 0;
	if (parse_args(&a, ac, av))
		return (free_stack(&a), write(2, "Error\n", 6), 1);
	run_sort(&a, &b);
	free_stack(&a);
	return (0);
}
