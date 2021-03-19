#include "../../includes/includes.h"

void            stack_clone(t_stack clone, t_stack og)
{
	int i;

	i = 0;
	clone->size = og->size;
	clone->top_index = og->top_index;
	while (i <= og->top_index)
	{
		clone->data[i] = og->data[i];
		i++;
	}
}

void            stack_resize(t_stack s, int newalloc)
{
	t_stack temp;

	stack_clone(temp, s);
	stack_destroy(s);
	s = ext_stack_construct(newalloc);
	stack_clone(s, temp);
}

t_stack         stack_construct(int size)
{
    t_stack s;

	s = ext_stack_construct(STACK_ALLOC);
    s->size = size;
    s->top_index = -1;
    return (s);
}

t_stack         ext_stack_construct(int alloc)
{
	t_stack s;
	
	if (!(s = (t_stack)malloc(sizeof(s_stack))))
		return (0);
    if (!(s->data = (int *)malloc(sizeof(int) * alloc)))
        return (0);
	s->alloc = STACK_ALLOC;
}

void            stack_destroy(t_stack s)
{
    free(s->data);
    free(s);
}

int             stack_is_full(t_stack s)
{
    return (s->top_index == s->size);
}

int             stack_is_empty(t_stack s)
{
    return (s->top_index == -1);
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
    if (s->size > s->alloc)
		stack_resize(s, (s->alloc * 2) + 1);
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
    for (int i = a->top_index; i >= 0; i--)
		printf("%d\n", a->data[i]);
	
	printf("|A|\n\n");
    
	for (int i = b->top_index; i >= 0; i--)
		printf("%d\n", b->data[i]);
	
	printf("|B|\n\n");
}

void            stack_debug1(t_stack s)
{
	printf("Allocated blocs : %d\n", s->alloc);
	for (int i = s->top_index; i >= 0; i--)
		printf("%d\n", s->data[i]);
	printf("|STACK|\n");
}