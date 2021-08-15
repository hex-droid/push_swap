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
	else
		bigsort(a, b);
}

void		lock_load(int ac, char **av, intarray a, intarray b)
{
	if (ac == 1)
		exit (0);
	if (load_data(av, a) == 0)
		error_exit(a, b, 1);
	if (is_sorted(a) == 1)
		error_exit(a, b, 0);
}
int		main(int ac, char **av)
{
	intarray	a = standard_empty_create_intarray();
	intarray	b = standard_empty_create_intarray();

	lock_load(ac, av, a, b);
	sort(a, b);
	destroy_intarray(a);
	destroy_intarray(b);
	return (0);
}
