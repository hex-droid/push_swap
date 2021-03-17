#ifndef INCLUDES_H
# define INCLUDE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct _stack s_stack;
typedef struct _stack *t_stack;

struct  _stack
{
    int         *data;
    int         size;
    int         top_index;
};

t_stack         stack_construct(int size);
int             stack_is_empty(t_stack s);
int             stack_is_full(t_stack s);
int             stack_pop(t_stack s);
int             stack_push(t_stack s, int i);
void            stack_destroy(t_stack s);
int             stack_exists(t_stack s, int value);
int             stack_size(t_stack s);

void            op_swap(t_stack s);
void            op_push(t_stack to, t_stack from);
void            op_rotate(t_stack s);
void            op_reverse_rotate(t_stack s);

void            stack_debug(t_stack a, t_stack b);

#endif