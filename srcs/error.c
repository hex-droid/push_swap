#include "../inc/push_swap.h"

void		error_exit(t_list *a, t_list *b, const char *str)
{
	printf ("Error: %s\n", str);
	free_all(a, b);
	exit (0);
}