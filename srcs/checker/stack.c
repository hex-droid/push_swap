#include "../../includes/includes.h"

t_stack         stack_construct(int size)
{
    t_stack s;

    if (!(s = (t_stack)malloc(sizeof(s_stack))))
        return (0);
    s->size = size;
    if (!(s->data = (int *)malloc(sizeof(int) * s->size)))
        return (0);
    s->top_index = -1;
    return (s);
}

int             stack_is_empty(t_stack s)
{
    return (s->top_index == -1);
}

int             stack_is_full(t_stack s)
{
    return (s->top_index == s->size - 1);
}

void            stack_destroy(t_stack s)
{
    free(s->data);
    free(s);
}

int             stack_pop(t_stack s)
{
    if (stack_is_empty(s))
        return (-1);
    s->top_index--;
    return (1);
}

int             stack_push(t_stack s, int i)
{
    if (stack_is_full(s))
        return (0);
    s->top_index++;
    s->data[s->top_index] = i;
    return (1);
}

int             stack_size(t_stack s)
{
    return (s->top_index + 1);
}

int            stack_exists(t_stack s, int value)
{
    int i;

    i = 0;
    while (i <= s->top_index)
    {
        if (s->data[i] == value)
            return (1);
        i++;
    }
    return (0);
}

void            stack_debug(t_stack a, t_stack b)
{
    printf("stack a:\n");
    for (int i = a->top_index; i >= 0; i--)
        printf("%d\n", a->data[i]);
    printf("stack b:\n");
    for (int i = b->top_index; i >= 0; i--)
        printf("%d\n", b->data[i]);
}