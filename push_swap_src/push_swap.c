#include "push_swap.h"

void		sort_2_elem(intarray a, intarray b)
{
	op_sa(a, 1);
	(void)b;
}

void		sort_3_elem(intarray a, intarray b)
{
	if (is_sorted(a))
		return ;
	if (get_intarray(a, 0) > get_intarray(a, 1))
	{
		if (get_intarray(a, 1) < get_intarray(a, 2))
		{
			if (get_intarray(a, 0) < get_intarray(a, 2))
				op_sa(a, 1);
			else if (get_intarray(a, 0) > get_intarray(a, 2))
				op_ra(a, 1);
		}
		else
		{
			op_sa(a, 1);
			op_rra(a, 1);
		}
	}	
	else
		ext_sort_3_elem(a);
	(void)b;
}

void		ext_sort_3_elem(intarray a)
{	
	if (get_intarray(a, 0) < get_intarray(a, 2))
	{
		op_sa(a, 1);
		op_ra(a, 1);
	}
	else
		op_rra(a, 1);
}

void		sort_4_elem(intarray a, intarray b)
{
	min_pb(a, b);
	sort_3_elem(a, b);
	op_pa(a, b, 1);
}

void		sort_5_elem(intarray a, intarray b)
{
	min_pb(a, b);
	min_pb(a, b);
	sort_3_elem(a, b);
	if (get_intarray(b, 0) < get_intarray(b, 1))
		op_sb(b, 1);
	op_pa(a, b, 1);
	op_pa(a, b, 1);
}