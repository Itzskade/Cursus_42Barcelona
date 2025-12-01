#include "push_swap.h"

static char      *join_args(int ac, char **av)
{
    char    *joined;
    char    *tmp;
    int     i;

    joined = malloc(1);
    if (!joined)
        return (NULL);
    joined[0] = '\0';
    i = 1;
    while (i < ac)
    {
        tmp = joined;
        joined = ft_strjoin(joined, av[i]);
        free(tmp);
        if (!joined)
            return (NULL);
        if (i < ac - 1)
        {
            tmp = joined;
            joined = ft_strjoin(joined, " ");
            free(tmp);
            if (!joined)
                return (NULL);
        }
        i++;
    }
    return (joined);
}


t_list      *parse(int ac, char **av)
{
    int     i;

    i = 1;
    while (ac--)
    {
        if (av[i] == ' ' ) 
            ft_split(av[i], " ");
        else if (av[i] == '\t')
            ft_split(av[i], "\t");
    }
}