#include "operations.h"

void		op_sa(intarray stack_a, int flag)
{
	op_swap(stack_a);
	if (flag)
		ft_putstr("sa\n");
}

void		op_swap(intarray lst)
{
	if (length_intarray(lst) < 2)
		return ;
	swap_int(&lst->data[0], &lst->data[1]);
}

void		op_sb(intarray stack_b, int flag)
{
	op_swap(stack_b);
	if (flag)
		ft_putstr("sb\n");
}

void		op_ss(intarray stack_a, intarray stack_b, int flag)
{
	op_sa(stack_a, 0);
	op_sb(stack_b, 0);
	if (flag)
		ft_putstr("ss\n");	
}

void		op_pa(intarray stack_a, intarray stack_b, int flag)
{
	op_push(stack_b, stack_a);
	if (flag)
		ft_putstr("pa\n");
}

void		op_push(intarray a, intarray b)
{
	if (!length_intarray(a))
		return ;
	set_intarray(b, 0, get_intarray(a, 0));
	delete_intarray(a, 0);
}

void		op_pb(intarray stack_a, intarray stack_b, int flag)
{
	op_push(stack_a, stack_b);
	if (flag)
		ft_putstr("pb\n");
}

void		op_ra(intarray stack_a, int flag)
{	
	op_reverse(stack_a);
	if (flag)
		ft_putstr("ra\n");
}

void		op_reverse(intarray stack_a)
{
	intarray clone = clone_intarray(stack_a);
	int	i;


	i = 0;
	if (!length_intarray(stack_a))
		return ;
	while (i < clone->len - 1)
	{
		set_intarray(stack_a, i, get_intarray(clone, i + 1));	
		i++;
	}
	set_intarray(stack_a, i, get_intarray(clone, 0));
	destroy_intarray(clone);
}

void		op_rb(intarray stack_b, int flag)
{
	op_reverse(stack_b);	
	if (flag)
		ft_putstr("rb\n");
}

void		op_rr(intarray stack_a, intarray stack_b, int flag)
{
	op_ra(stack_a, 0);
	op_rb(stack_b, 0);
	if (flag)
		ft_putstr("rr\n");
}


void		op_rreverse(intarray stack_a)
{
	intarray clone = clone_intarray(stack_a);
	int	i;


	i = 0;
	if (!length_intarray(stack_a))
		return ;
	set_intarray(stack_a, i, get_intarray(clone, clone->len - 1));
	while (i < clone->len - 1)
	{
		i++;
		set_intarray(stack_a, i, get_intarray(clone, i - 1));	
	}
	destroy_intarray(clone);
}

void		op_rra(intarray stack_a, int flag)
{
	op_rreverse(stack_a);
	if (flag)
		ft_putstr("rra\n");
}

void		op_rrb(intarray stack_b, int flag)
{
	op_rreverse(stack_b);
	if (flag)
		ft_putstr("rrb\n");
}

void		op_rrr(intarray stack_a, intarray stack_b, int flag)
{
	if (stack_a)
		op_rra(stack_a, 0);
	if (stack_b)
		op_rrb(stack_b, 0);
	if (flag)
		ft_putstr("rrr\n");		
}