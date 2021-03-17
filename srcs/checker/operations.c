#include "../includes/includes.h"

void            op_swap(t_stack s)
{
    int tmp;

    if (s->top_index > 1)
    {
        tmp = s->data[s->top_index - 1];
        s->data[s->top_index - 1] = s->data[s->top_index];
        s->data[s->top_index] = tmp;
    }
}

void            op_push(t_stack to, t_stack from)
{
    if (stack_is_empty(from) || stack_is_full(to))
        return ;
    to->top_index++;
    to->data[to->top_index] = from->data[from->top_index];
    from->top_index--;
}