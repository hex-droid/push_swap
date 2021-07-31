#include "../inc/push_swap.h"

void		op_sa(t_list **stack_a)
{
	if (lst_size(*stack_a) <= 1)
		return ;
	op_swap(stack_a);
}

void		op_sb(t_list **stack_b)
{
	if (lst_size(*stack_b) <= 1)
		return ;
	op_swap(stack_b);
}

void		op_ss(t_list **stack_a, t_list **stack_b)
{
	op_sa(stack_a);
	op_sb(stack_b);
}

void		op_pa(t_list **stack_a, t_list **stack_b)
{
	if (!lst_size(*stack_b))
		return ;
	(*stack_b)->next = (*stack_a);
	lst_delete_first(stack_b);
}

void		op_pb(t_list **stack_a, t_list **stack_b)
{
	if (!lst_size(*stack_a))
		return ;
	(*stack_a)->next = (*stack_b);
	lst_delete_first(stack_a);	
}