#include "push_swap.h"

void		ext_pb_nmin_nmax(intarray a, intarray b, int mid)
{
	op_pb(a, b, 1);
	if (get_intarray(b, 0) >= mid)
		op_rb(b, 1);
}

void		pb_nmin_nmax(intarray a, intarray b)
{
	int	min;
	int	max;
	int	mid;
	int	size;

	size = length_intarray(a);
	min = get_min_intarray(a);
	max = get_max_intarray(a);
	mid = (int)median_intarray(a);
	while (--size >= 0)
	{
		if (get_intarray(a, 0) != min && get_intarray(a, 0) != max)
			ext_pb_nmin_nmax(a, b, mid);
		else
			op_ra(a, 1);
	}
	if (get_intarray(a, 0) < get_intarray(a, 1))
		op_ra(a, 1);
}

int		get_index_closest(intarray x, int val)
{
	int	i;
	int	result;
	int	res_val;

	i = -1;
	res_val = get_max_intarray(x);
	result = get_index_max_intarray(x);
	while (++i < length_intarray(x))
	{
		if (val < get_intarray(x, i) && get_intarray(x, i) < res_val)
		{
			res_val = get_intarray(x, i);
			result = i;
		}
	}
	return (result);
}

void		compute_op(intarray a, intarray b, t_variables *vars)
{
	vars->closest = get_index_closest(a, get_intarray(b, vars->j));
	vars->asize = length_intarray(a);
	if (vars->closest > (vars->asize / 2))
		vars->closest = vars->asize - vars->closest;
	if (vars->j < (vars->size / 2))
		vars->moves[vars->j] = vars->j + vars->closest;
	else
		vars->moves[vars->j] = (vars->size - vars->j) + vars->closest;
}

int		get_index_move(int *tab, int size)
{
	int	min_index;
	int	min_val;
	int	i;

	min_val = tab[0];
	min_index = 0;
	i = 0;
	while (++i < size)
	{
		if (tab[i] < min_val)
		{
			min_index = i;
			min_val = tab[i];
		}
	}
	return (min_index);
}
