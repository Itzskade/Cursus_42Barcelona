#include "push_swap.h"

char    *ft_strndup(const char *s, size_t n)
{
    char    *dup;
    char    *p;

    if (!s)
        return (NULL);
    dup = malloc(sizeof(char) * (n + 1));
    if (!dup)
        return (NULL);
    p = dup;
    while (*s && n--)
        *p++ = *s++;
    *p = '\0';
    return (dup);
}

size_t   ft_strlen(char *s)
{
    char    *p;

    p = s;
    while (*p)
        p++;
    return (p - s);
}

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    const unsigned char  *s;
    unsigned char        *d;

    s = (const unsigned char *)src;
    d = (unsigned char *)dest;
    while (n--)
        *d++ = *s++;
    return (dest);
}

char    **free_all(char **arr)
{
    char    **tmp;
    
    tmp = arr;
    while (*tmp)
        free(*tmp++);
    free(arr);
    return (NULL);
}