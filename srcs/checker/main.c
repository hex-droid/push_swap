/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:05:44 by ztaouil           #+#    #+#             */
/*   Updated: 2021/05/24 13:10:45 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/includes.h"

void            check_line(char *line, t_stack a, t_stack b)
{
    if (cmp(line, "sa"))
        op_sa(a, b);
    else if (cmp(line, "sb"))
        op_sb(a, b);
    else if (cmp(line, "ss"))
        op_ss(a, b);
    else if (cmp(line, "pa"))
        op_pa(a, b);
    else if (cmp(line, "pb"))
        op_pb(a, b);
    else if (cmp(line, "ra"))
        op_ra(a, b);
    else if (cmp(line, "rb"))
        op_rb(a, b);
    else if (cmp(line, "rr"))
        op_rr(a, b);
    else if (cmp(line, "rra"))
        op_rra(a, b);
    else if (cmp(line, "rrb"))
        op_rrb(a, b);
    else if (cmp(line, "rrr"))
        op_rrr(a, b);
    else 
        error_handle("Wrong input");
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
    printf("|||||||||BEFORE|||||||||\n");
    stack_debug2(a, b);
    while (get_next_line(&line) > 0)
    {
        check_line(line, a, b);
        free(line);
        line = NULL;
    }
    printf("||||||||||AFTER||||||||||\n");
    stack_debug2(a, b);
    checker(a);
    stack_destroy(a);
    stack_destroy(b);
    return (EXIT_SUCCESS);
}