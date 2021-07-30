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
	t_list *temp = lst_delete_last(stack_a);
	lst_debug(temp);
//	lst_free(stack_a);
	lst_free(temp);
	tools_memory_check_at_end_of_app();
	return (0);
}

