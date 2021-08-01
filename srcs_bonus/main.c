#include "../inc/push_swap.h"

int		main(int ac, char **av)
{
	tools_memory_init();
	t_list *a = NULL;
	t_list *b = NULL;
	char *line;

	if (ac == 1)
		return (0);
	load_data(av, &a, b);
	visualize(a, b);
	while (get_next_line(&line) > 0)
	{
		check_execute(&a, &b, line);
		printf("%s\n", line);
		free(line);
		line = NULL;
	}
	free(line);
	line = NULL;
	visualize(a, b);
	is_it_sorted(a, b);
	free_all(a, b);
	tools_memory_check_at_end_of_app();
}