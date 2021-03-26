#include "../../includes/includes.h"
#include <stdio.h>

int     ft_is_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int     cmp(char *s1, char *s2)
{
    int     i;
    int     len;

    i = 0;
    len = ft_strlen(s1);
    if (len != ft_strlen(s2))
        return (0);
    while (i < len)
    {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    return (1);
}