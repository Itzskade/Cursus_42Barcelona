#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/* --------------------- STRUCTS --------------------- */
typedef  struct s_node
{
    int             value;
    int             index;
    struct s_node   *next;
}                   t_node;

typedef struct s_stack
{
    t_node  *top;
    int     size;
}           t_stack;

/* ---------------------- SWAP ---------------------- */
void    sa(t_node **stack);
void    sb(t_node **stack);
void    ss(t_node **a, t_node **b);
/* ---------------------- PUSH ---------------------- */
void    pa(t_node **a, t_node **b);
void    pb(t_node **a, t_node **b);
/* --------------------- ROTATE --------------------- */
void    ra(t_node **stack);
void    rb(t_node **stack);
void    rr(t_node **a, t_node **b);
/* ----------------- REVERSE ROTATE ----------------- */
void    rra(t_node **stack);
void    rrb(t_node **stack);
void    rrr(t_node **a, t_node **b);
/* -------------------- FT_SPLIT -------------------- */
char    **ft_split(const char *str, const char *sep);
/* -------------------- FT_ATOL --------------------- */
int     ft_atol(const char *str);
/* --------------------- UTILS ---------------------- */
char    *ft_strndup(const char *s, size_t n);
size_t   ft_strlen(char *s);
void    *ft_memcpy(void *dest, const void *src, size_t n);
char    **free_all(char **arr);
/* --------------------- PARSE ---------------------- */
char    **parse(int ac, char **av);

#endif