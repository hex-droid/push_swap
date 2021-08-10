#include "push_swap.h"

int		main(int ac, char **av)
{
	//tools_memory_init();
	intarray	a = standard_empty_create_intarray();
	intarray	b = standard_empty_create_intarray();

	if (ac == 1 || load_data(av, a) == 0 || is_sorted(a) == 1)
		exit_free(a, b);
//	sort(a, b);

	destroy_intarray(a);
	destroy_intarray(b);
	//tools_memory_check_at_end_of_app();
	return (0);
}

/*
	debug_intarray(a);
	op_sa(a, 1);
	debug_intarray(a);
	op_sa(a, 1);
	debug_intarray(a);
	op_ra(a, 1);
	debug_intarray(a);
	op_rra(a, 1);
	debug_intarray(a);
*/