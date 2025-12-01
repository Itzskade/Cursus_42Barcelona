#include "push_swap.h"

static void     skip_zeros(const char **s)
{
    while (**s == '0')
        (*s)++;
}

long     ft_atol(const char *str)
{
    long    result;
    int    sign;

    sign = 1;
    result = 0;
    while (*str == ' ' || *str >= 9 && *str <= 13)
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -sign;
        str++;
    }
    skip_zeros(&str);
    while (*str >= '0' && *str <= '9')
        result = result * 10 + (*str++ - '0');
    result *= sign;
    return (result);
}