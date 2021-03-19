#ifndef INCLUDES_H
# define INCLUDE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# define STACK_ALLOC 8
typedef struct _stack s_stack;
typedef struct _stack *t_stack;

struct  _stack
{
    int         *data;
    int         size;
    int         alloc;
    int         top_index;
};

t_stack         stack_construct(int size);
t_stack         ext_stack_construct();
int             stack_pop(t_stack s);
int             stack_push(t_stack s, int i);
void            stack_destroy(t_stack s);
int             stack_exists(t_stack s, int value);
int             stack_size(t_stack s);
int             stack_is_empty(t_stack s);
int             stack_is_full(t_stack s);
void            stack_resize(t_stack s, int newalloc);
void            stack_clone(t_stack clone, t_stack og);

void            op_swap(t_stack s);
void            op_push(t_stack to, t_stack from);
void            op_rotate(t_stack s);
void            op_reverse_rotate(t_stack s);

void            op_sa(t_stack a, t_stack b);
void            op_sb(t_stack a, t_stack b);
void            op_ss(t_stack a, t_stack b);
void            op_pa(t_stack a, t_stack b);
void            op_pb(t_stack a, t_stack b);
void            op_ra(t_stack a, t_stack b);
void            op_rb(t_stack a, t_stack b);
void            op_rr(t_stack a, t_stack b);
void            op_rra(t_stack a, t_stack b);
void            op_rrb(t_stack a, t_stack b);
void            op_rrr(t_stack a, t_stack b);

int             stack_is_sorted(t_stack a, t_stack b);
void            checker(t_stack a, t_stack b);

void            stack_debug2(t_stack a, t_stack b);
void            stack_debug1(t_stack s);

int         get_next_line(char **line);
char        *ft_strjoin(char *line, char buffer);
int         ft_strlen(const char *s);

#endif