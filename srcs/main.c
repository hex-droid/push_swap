#include "../inc/push_swap.h"

int		main(int ac, char **av)
{
	tools_memory_init();
	t_list	*stack_a = NULL;
	t_list	*stack_b = NULL;

	(void)stack_b;
	if (ac == 1)
		return (0);
	load_data(av, &stack_a);
	printf("ra\npa\npb\npo\n");	
	free_all(stack_a, stack_b);
	tools_memory_check_at_end_of_app();
	return (0);
}

