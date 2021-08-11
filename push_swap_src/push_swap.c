#include "push_swap.h"

void		sort(intarray a, intarray b)
{
	if (length_intarray(a) == 2)
		sort_2_elem(a, b);
	else if (length_intarray(a) == 3)
		sort_3_elem(a, b);
	else if (length_intarray(a) == 4)
		sort_4_elem(a, b);
	else if (length_intarray(a) == 5)
		sort_5_elem(a, b);
}

void		sort_2_elem(intarray a, intarray b)
{
	op_sa(a, 1);
	(void)b;
}

void		sort_3_elem(intarray a, intarray b)
{
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
		if (get_intarray(a, 0) < get_intarray(a, 2))
		{
			op_sa(a, 1);
			op_ra(a, 1);
		}
		else
			op_rra(a, 1);
	(void)b;
}

void		sort_4_elem(intarray a, intarray b);


void		sort_5_elem(intarray a, intarray b);