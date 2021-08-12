#include "push_swap.h"

int		is_odd(int nb)
{
	if (nb % 2 == 0)
		return (0);
	return (1);
}

void		min_pb(intarray a, intarray b)
{
	int	pos;
	int	len;

	len = length_intarray(a);
	pos = get_index_min_intarray(a) + 1;
	sp_min_pb(a, b, len, pos);
/* 	if (pos <= 2)
	{
		if (pos > 1)
			op_sa(a, 1);
		op_pb(a, b, 1);
	}
	else
		ext_min_pb(a, b, len, pos); */
}

void		sp_min_pb(intarray a, intarray b, int len, int pos)
{
	if (pos <= 2)
	{
		if (pos > 1)
			op_sa(a, 1);
		op_pb(a, b, 1);
	}
	else
		ext_min_pb(a, b, len, pos);
}

void		ext_min_pb(intarray a, intarray b, int len, int pos)
{
	if ((is_odd(len) == 1 && pos <= (len / 2) + 1) 
	|| (is_odd(len) == 0 && pos <= len / 2))
	{
		while (pos > 1)
		{
			op_ra(a, 1);
			pos--;
		}
	}
	else if ((is_odd(len) == 1 && pos > (len / 2)) 
		|| (is_odd(len) == 0 && pos > (len / 2)))
	{
		while (pos <= len)
		{
			op_rra(a, 1);
			pos++;
		}
	}
	op_pb(a, b, 1);	
}

void		max_pa(intarray a, intarray b)
{
	int	len;
	int	pos;

	len = length_intarray(b);
	pos = get_index_max_intarray(b) + 1;
	if (pos <= 2)
	{
		if (pos > 1)
			op_sb(b, 1);
		op_pa(a, b, 1);
	}
	else
		ext_max_pa(a, b, pos, len);
}

void		ext_max_pa(intarray a, intarray b, int pos, int len)
{
	if ((is_odd(len) && pos <= (len / 2) + 1) 
	|| (!is_odd(len) && pos <= len / 2))
	{
		while (pos > 1)
		{
			op_rb(b, 1);
			pos--;
		}
	}
	else if ((is_odd(len) && pos > (len / 2)) 
		|| (!is_odd(len) && pos > (len / 2)))
	{
		while (pos <= len)
		{
			op_rrb(b, 1);
			pos++;
		}
	}
	op_pa(a, b, 1);		
}
