#include "push_swap.h"

void		error_exit(intarray a, const char *str)
{
	printf ("Error: %s\n", str);
	if (a)
		destroy_intarray(a);
	exit (0);
}

void		exit_free(intarray a, intarray b)
{
	if (a)
		destroy_intarray(a);
	if (b)	
		destroy_intarray(b);
	exit (0);
}