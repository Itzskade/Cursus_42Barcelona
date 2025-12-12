#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int		value;
	int		index;
	struct s_node	*next;
}			t_node;

typedef struct s_stack
{
	t_node	*top;
	int	size;
}		t_stack;

/* swap.c */
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
/* push.c */
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
/* rotate.c */
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
/* reverse_rotate.c */
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
/* small.c */
void	sort_three(t_stack *a);
void	sort_small(t_stack *a, t_stack *b);
int	is_sorted(t_stack *stack);
/* radix.c */
void	assign_index(t_stack *a);
void	radix_sort(t_stack *a, t_stack *b);
/* utils.c */
int	ft_is_space(int c);
int	ft_is_digit(int c);
void	free_stack(t_stack *stack);
void	free_split(char **split);
/* ft_split.c */
char	**ft_split(char *s);
/* parse.c */
int	parse_args(t_stack *a, int ac, char **av);
/* push_swap.c */
int	main(int ac, char **av);
#endif
