#include "push_swap.h"

void		error_exit(intarray a, intarray b, int flag)
{
	if (flag == 1)
		ft_putstr_fd ("Error\n", 2);
	exit_free(a, b);
}

void		exit_free(intarray a, intarray b)
{
	if (a)
		destroy_intarray(a);
	if (b)	
		destroy_intarray(b);
	exit (0);
}