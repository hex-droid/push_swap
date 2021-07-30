#include "../inc/push_swap.h"

void		error_exit(t_list *lst, const char *str)
{
	printf ("Error: %s\n", str);
	lst_free(lst);
	exit (0);
}