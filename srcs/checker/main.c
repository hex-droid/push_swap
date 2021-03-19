#include "../includes/includes.h"

int     main()
{
    t_stack a = stack_construct(10);
    //t_stack b = stack_construct(10);

    for (int i = 0; i < 6; i++)
        stack_push(a, 2 * i + 6);
    // for (int i = 0; i < 6; i++)
    //    stack_push(b, i + 2);
    

    // stack_debug2(a, b);
    stack_debug1(a);

    op_reverse_rotate(a);

    stack_debug1(a);

    // stack_debug2(a, b);

    stack_destroy(a);
    
    // stack_destroy(b);
    return (EXIT_SUCCESS);
}