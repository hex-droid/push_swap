#include "../../includes/includes.h"

t_stack         stack_construct(int size)
{
    t_stack s;
	
	if (!(s = (t_stack)malloc(sizeof(s_stack))))
		return (0);
	if (!(s->data = (int *)malloc(sizeof(int) * size)))
		return (0);
	s->size = size;
    s->top_index = -1;
    return (s);
}

void            stack_destroy(t_stack s)
{
    free(s->data);
    free(s);
}

int             stack_is_full(t_stack s)
{
    return (s->top_index == s->size - 1);
}

int             stack_is_empty(t_stack s)
{
    return (s->top_index == -1);
}

int             stack_pop(t_stack s)
{
    if (stack_is_empty(s))
        error_handle("Stack is empty!\n");
    return(s->data[s->top_index--]);
}

int             stack_push(t_stack s, int i)
{
    if (stack_is_full(s))
		error_handle("Stack is full!\n");
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

void            stack_debug2(t_stack a, t_stack b)
{
    int  top_index;

    top_index = (a->top_index >= b->top_index) ? a->top_index : b->top_index;
    printf("|||||||||||||||||||||||||\n");
    for (int i = top_index; i >= 0; i--)
		printf("||   %d    ||     %d     ||\n", a->data[i], b->data[i]);
    printf("|||||||||||||||||||||||||\n");
	printf("|||| A ||||||||| B ||||||\n");
    printf("|||||||||||||||||||||||||\n");
}

void            stack_debug1(t_stack s)
{
	for (int i = s->top_index; i >= 0; i--)
		printf("%d\n", s->data[i]);
	printf("|STACK|\n");
}