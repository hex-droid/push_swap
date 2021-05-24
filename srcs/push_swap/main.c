/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 09:53:01 by ztaouil           #+#    #+#             */
/*   Updated: 2021/05/24 10:10:32 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/includes.h"

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
        if (is_valid_int(av[i]) && !stack_exists(a, atoi(av[i])))
            stack_push(a, atoi(av[i]));
        else
            error_handle("Duplicated number!");
        i--;
    }

    stack_debug1(a);

    if (stack_size(a) == 3)
        sort_3_elem(a, b);


    stack_destroy(a);
    stack_destroy(b);
    return (0);
}