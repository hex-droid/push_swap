#include "../inc/push_swap.h"

int		main(int ac, char **av)
{
	tools_memory_init();
	t_list	*a = NULL;
	t_list	*b = NULL;

	if (ac == 1)
		return (0);
	load_data(av, &a, b);
	printf("pb\npb\nsa\nsb\nss\nrrr\nrraa\n");
	free_all(a, b);
	tools_memory_check_at_end_of_app();
	return (0);
}

