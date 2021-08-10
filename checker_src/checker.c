#include "checker.h"

int		main(int ac, char **av)
{
	//tools_memory_init();
	intarray a = standard_empty_create_intarray();
	intarray b = standard_empty_create_intarray();
	char *line;

	if (ac == 1 || load_data(av, a) == 0)
		exit_free(a, b);
	while (get_next_line(&line) > 0)
	{
		check_execute(a, b, line);
		printf("%s\n", line);
		free(line);
		line = NULL;
	}
	free(line);
	line = NULL;
	is_it_sorted(a, b);
	destroy_intarray(a);
	destroy_intarray(b);
	//tools_memory_check_at_end_of_app();
}