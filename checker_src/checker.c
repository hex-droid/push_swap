#include "checker.h"

void		fault_check(int ac, char **av, intarray a, intarray b)
{
	if (ac == 1)
		exit (0);
	if (load_data(av, a) == 0)
		error_exit(a, b, 1);
	if (is_sorted(a))
	{	
		ft_putstr_fd("OK\n", 1);
		error_exit(a, b, 0);
	}
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
	intarray a = standard_empty_create_intarray();
	intarray b = standard_empty_create_intarray();

	fault_check(ac, av, a, b);
	read_execute(a, b);
	destroy_intarray(a);
	destroy_intarray(b);
}