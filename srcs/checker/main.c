#include "../../includes/includes.h"

/*
    need to check for duplicate elements
*/
int             is_valid_int(char *s)
{
    int i;

    i = 0;
    while (s[i++])
    {
        if ((ft_is_num(s[i]) == 0))
            error_handle("Argument is int'nt\n");
    }
    return (1);
}

int             stack_is_sorted(t_stack s)
{
    int tmp1;
    int tmp2;

    tmp1 = stack_pop(s);
    while (!stack_is_empty(s))
    {
        tmp2 = stack_pop(s);
        if (tmp1 > tmp2)
            return (0);
        tmp1 = tmp2;
    }
    return (1);
}

void            checker(t_stack a)
{
    if (stack_is_sorted(a))
        printf("OK!\n");
    else
        printf("KO!\n");
}

int     main(int ac, char **av)
{
    t_stack a;
    t_stack b;
    int     i;

    if (ac == 1)
        return (0);
    i = ac - 1;
    a = stack_construct(ac - 1);
    b = stack_construct(ac - 1);
    while (i > 0)
    {
        if (is_valid_int(av[i]) || !stack_exists(a, atoi(av[i])))
            stack_push(a, atoi(av[i]));
        else
            return (0);
        i--;
    }
    
    stack_debug2(a, b);

    stack_destroy(a);
    stack_destroy(b);
    return (EXIT_SUCCESS);
}