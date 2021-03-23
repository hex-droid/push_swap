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
    int         alloc;
    int         top_index;
};

t_stack         stack_construct(int size);
int             stack_pop(t_stack s);
int             stack_push(t_stack s, int i);
void            stack_destroy(t_stack s);
int             stack_exists(t_stack s, int value);
int             stack_size(t_stack s);
int             stack_is_empty(t_stack s);
int             stack_is_full(t_stack s);

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

int             stack_is_sorted(t_stack s);
void            checker(t_stack a);

void            stack_debug(t_stack s);
void            stack_debug2(t_stack a, t_stack b);


int             get_next_line(char **line);
char         *ft_strjoin(char *line, char buffer);
int         ft_strlen(const char *s);
void        ft_putchar_fd(char c, int fd);
void        ft_putstr_fd(const char *str, int fd);
void        error_handle(const char *message);
int         ft_is_num(char c);
int         is_valid_int(char *s);


#endif
