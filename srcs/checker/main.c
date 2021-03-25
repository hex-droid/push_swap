#include "../../includes/includes.h"

void            parse_line(char *line)
{
    int len;

    len = ft_strlen(line);
    if (len > 3)
        error_handle("Invalid flag!");
}

int             is_valid_int(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (!(ft_is_num(s[i])))
			error_handle("Invalid value!");
        i++;
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
    char    *line;
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
        if (is_valid_int(av[i]) && !stack_exists(a, atoi(av[i])))
            stack_push(a, atoi(av[i]));
        else
            error_handle("Duplicated number!");
        i--;
    }
    while (get_next_line(&line) > 0)
    {
        parse_line(line);
        printf("%s\n", line);
        free(line);
        line = NULL;
    }
    
    stack_debug1(a);

    stack_destroy(a);
    stack_destroy(b);
    return (EXIT_SUCCESS);
}