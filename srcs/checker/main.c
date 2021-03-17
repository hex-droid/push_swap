#include "../includes/includes.h"

int     main()
{
    t_stack a = stack_construct(6);
    t_stack b = stack_construct(6);

    for (int i = 0; i < 6; i++)
        stack_push(a, 2 * i + 6);
    for (int i = 0; i < 6; i++)
        stack_push(b, i + 2);
    
    stack_debug(a, b);
   
    op_push(a, b);

    stack_debug(a, b);

    stack_destroy(a);
    stack_destroy(b);
    return (EXIT_SUCCESS);
}