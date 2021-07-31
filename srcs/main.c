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

	lst_debug(stack_a);

	lst_delete_first(&stack_a);
	write (1, "\n", 1);

	lst_debug(stack_a);
//	op_ss(&stack_a, &stack_b);
//	visualize(stack_a, stack_b);
	
	lst_free(stack_a);
	tools_memory_check_at_end_of_app();
	return (0);
}

