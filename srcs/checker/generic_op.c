#include "../../includes/includes.h"

void            op_sa(t_stack a, t_stack b)
{
    op_swap(a);
}

void            op_sb(t_stack a, t_stack b)
{
    op_swap(b);
}

void            op_ss(t_stack a, t_stack b)
{
    op_sa(a, b);
    op_sb(a, b);
}

void            op_pa(t_stack a, t_stack b)
{
    op_push(a, b);
}

void            op_pb(t_stack a, t_stack b)
{
    op_push(b, a);
}

void            op_ra(t_stack a, t_stack b)
{
    op_rotate(a);
}

void            op_rb(t_stack a, t_stack b)
{
    op_rotate(b);
}

void            op_rr(t_stack a, t_stack b)
{
    op_ra(a, b);
    op_rb(a, b);
}

void            op_rra(t_stack a, t_stack b)
{
    op_reverse_rotate(a);
}
void            op_rrb(t_stack a, t_stack b)
{
    op_reverse_rotate(b);
}

void            op_rrr(t_stack a, t_stack b)
{
    op_rra(a, b);
    op_rrb(a, b);
}