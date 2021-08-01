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
	op_push(stack_b, stack_a);
}

void		op_push(t_list **a, t_list **b)
{
	if (!lst_size(*a))
		return ;
	(void)b;
	lst_add_head(b, lst_new((*a)->data));
	lst_delete_first(a);
}

void		op_pb(t_list **stack_a, t_list **stack_b)
{
	op_push(stack_a, stack_b);
}

void		op_ra(t_list **stack_a)
{	
	op_reverse(stack_a);
}

void		op_reverse(t_list **stack_a)
{
	t_list *temp;

	if (*stack_a == NULL)
		return ;
	temp = lst_new((*stack_a)->data);
	lst_delete_first(stack_a);
	lst_add_back(stack_a, temp);
}

void		op_rb(t_list **stack_b)
{
	op_reverse(stack_b);	
}

void		op_rr(t_list **stack_a, t_list **stack_b)
{
	op_ra(stack_a);
	op_rb(stack_b);
}

void		op_rra(t_list **stack_a)
{
	op_rreverse(stack_a);
}

void		op_rreverse(t_list **x)
{
	t_list *temp; 
	if (*x == NULL)
		return ;
	temp = lst_new(lst_last(*x)->data);
	lst_delete_last(x);
	lst_add_head(x, temp);	
}

void		op_rrb(t_list **stack_b)
{
	op_rreverse(stack_b);
}

void		op_rrr(t_list **stack_a, t_list **stack_b)
{
	if (stack_a)
		op_rra(stack_a);
	if (stack_b)
		op_rrb(stack_b);
}