#include "checker.h"

void		fault_check(int ac, char **av, intarray a, intarray b)
{
	if (ac == 1)
		exit (0);
	if (load_data(av, a) == 0)
		error_exit(a, b);
}

void		read_execute(intarray a, intarray b)
{
	char	*line;

	while (get_next_line(&line) > 0)
	{
		check_execute(a, b, line);
		free (line);
		line = NULL;
	}
	free (line);
	line = NULL;
	is_it_sorted(a, b);
}

int		main(int ac, char **av)
{
	tools_memory_init();
	intarray a = standard_empty_create_intarray();
	intarray b = standard_empty_create_intarray();

	fault_check(ac, av, a, b);
	read_execute(a, b);
	destroy_intarray(a);
	destroy_intarray(b);
	tools_memory_check_at_end_of_app();
}