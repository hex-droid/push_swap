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
	t_list	*temp = lst_new((*stack_b)->data);
	lst_add_head(stack_a, temp);
	lst_delete_first(stack_b);
}

void		op_pb(t_list **stack_a, t_list **stack_b)
{
	if (!lst_size(*stack_a))
		return ;
	t_list	*temp = lst_new((*stack_a)->data);
	lst_add_head(stack_b, temp);
	lst_delete_first(stack_a);	
}

void		op_ra(t_list **stack_a)
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
	t_list *temp;
	if (*stack_b == NULL)
		return ;
	temp = lst_new((*stack_b)->data);	
	lst_delete_first(stack_b);
	lst_add_back(stack_b, temp);	
}
void		op_rr(t_list **stack_a, t_list **stack_b)
{
	op_ra(stack_a);
	op_rb(stack_b);
}

void		op_rra(t_list **stack_a)
{
	t_list *temp; 
	if (*stack_a == NULL)
		return ;
	temp = lst_new(lst_last(*stack_a)->data);
	lst_delete_last(stack_a);
	lst_add_head(stack_a, temp);
}

void		op_rrb(t_list **stack_b)
{
	t_list *temp;
	if (*stack_b == NULL)
		return ;
	temp = lst_new(lst_last(*stack_b)->data);
	lst_delete_last(stack_b);
	lst_add_head(stack_b, temp);
}
void		op_rrr(t_list **stack_a, t_list **stack_b)
{
	if (stack_a)
		op_rra(stack_a);
	if (stack_b)
		op_rrb(stack_b);
}