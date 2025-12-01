#include "push_swap.h"

static char     *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == (char)c)
            return ((char *)str);
        str++;
    }
     if ((char)c == '\0')
        return (char *)str;
    return (NULL);
}

static size_t     countwords(const char *str, const char *sep)
{
    size_t     count;

    count = 0;
    while (*str)
    {
        while (*str && ft_strchr(sep, *str))
            str++;
        if (*str)
            count++;
        while (*str && !ft_strchr(sep, *str))
            str++;
    }
    return (count);
}

static char    **free_all(char **arr)
{
    char    **tmp;
    
    tmp = arr;
    while (*tmp)
        free(*tmp++);
    free(arr);
    return (NULL);
}

static char    **fill_words(char **arr, const char *str, const char *sep)
{
    char        **ptr;
    const char  *start;

    ptr = arr;
    while (*str)
    {
        while (*str && ft_strchr(sep, *str))
            str++;
        start = str;
        while (*str && !ft_strchr(sep, *str))
            str++;
        *ptr = ft_strndup(start, str - start);
        if (!*ptr)
            return (free_all(arr), NULL);
        ptr++;
    }
    *ptr = NULL;
    return (arr);
}

char    **ft_split(const char *str, const char *sep)
{
    char    **arr;
    char    **ptr;

    if (!str || !sep)
        return (NULL);
    arr = malloc(sizeof(char *) * (countwords(str, sep)+  1));
    if (!arr)
        return (NULL);
    return (fill_words(arr, str, sep));
}