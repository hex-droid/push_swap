#include "../includes/includes.h"

/*
    need to check for duplicate elements
*/
int             stack_is_sorted(t_stack a, t_stack b)
{
    int i;

    if (b->top_index != -1)
        return (0);
    if (stack_is_empty(a))
        return (0);
    i = 0;
    while (i < a->top_index)
    {
        if (a->data[i] > a->data[i + 1])
            return (0);
        i++;
    }
    return (1);
}

void            checker(t_stack a, t_stack b)
{
    if (stack_is_sorted(a, b))
        printf("OK!\n");
    else
        printf("KO!\n");
}

// int     main()
// {
//     t_stack a = stack_construct(10);
//     t_stack b = stack_construct(10);

//     for (int i = 0; i < 6; i++)
//         stack_push(a, i + 2);
//     // for (int i = 0; i < 6; i++)
//     //    stack_push(b, i + 2);
    

//     // stack_debug2(a, b);
//     stack_debug1(a);

//     checker(a, b);

//     // op_reverse_rotate(a);

//     // stack_debug1(a);

//     // stack_debug2(a, b);

//     stack_destroy(a);
    
//     stack_destroy(b);
//     return (EXIT_SUCCESS);
// }

int     main()
{
    t_stack stack = stack_construct(6);

    stack_push(stack, 4);
    stack_push(stack, 15);
    stack_push(stack, 7);
    stack_push(stack, 7);
    stack_push(stack, 7);
    stack_push(stack, 7);


    stack_debug1(stack);

    stack_destroy(stack);
}