#include "push_swap.h"

void		get_b_top(intarray b, t_variables *vars)
{
	if (vars->index_move < (vars->size / 2))
	{
		while (++vars->k < vars->index_move)
			op_rb(b, 1);
	}
	else
	{
		while (++vars->k < (vars->size - vars->index_move))
			op_rrb(b, 1);
	}
}

void		get_a_top(intarray a, t_variables *vars)
{
	if (vars->closest < (vars->size / 2))
	{
		while (++vars->k < vars->closest)
			op_ra(a, 1);
	}
	else
	{
		while (++vars->k < (vars->size - vars->closest))
			op_rra(a, 1);
	}
}

void		ra_rra(intarray a, t_variables *vars)
{
	if (vars->min_index > (vars->size / 2))
	{
		while (get_intarray(a, 0) != vars->min_val)
			op_rra(a, 1);
	}
	else
	{
		while (get_intarray(a, 0) != vars->min_val)
			op_ra(a, 1);
	}
}

void		bigsort(intarray a, intarray b)
{
	t_variables vars;

	vars.i = -1;
	pb_nmin_nmax(a, b);
	vars.fsize = length_intarray(b);
	while (++vars.i < vars.fsize)
	{
		vars.size = length_intarray(b);
		vars.moves = malloc(vars.size * sizeof(int));
		vars.j = -1;
		while (++vars.j < vars.size)
			compute_op(a, b, &vars);
		vars.k = -1;
		vars.index_move = get_index_move(vars.moves, vars.size);
		get_b_top(b, &vars);
		vars.k = -1;
		vars.closest = get_index_closest(a, get_intarray(b, 0));
		vars.size = length_intarray(a);
		get_a_top(a, &vars);
		op_pa(a, b, 1);
		free(vars.moves);
	}
	ext_bigsort(a, &vars);
}

void		ext_bigsort(intarray a, t_variables *vars)
{
	vars->size = length_intarray(a);
	vars->min_index = get_index_min_intarray(a);
	vars->min_val = get_min_intarray(a);
	ra_rra(a, vars);
}
