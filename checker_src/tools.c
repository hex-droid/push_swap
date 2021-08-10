#include "checker.h"

void		check_execute(intarray a, intarray b, char *line)
{
	if (!strcmp(line, "pa"))	
		op_pa(a, b, 0);
	else if (!strcmp(line, "pb"))	
		op_pb(a, b, 0);
	else if (!strcmp(line, "sa"))
		op_sa(a, 0);
	else if (!strcmp(line, "sb"))
		op_sb(b, 0);
	else if (!strcmp(line, "ss"))
		op_ss(a, b, 0);
	else if (!strcmp(line, "ra"))
		op_ra(a, 0);
	else if (!strcmp(line, "rb"))
		op_rb(b, 0);
	else if (!strcmp(line, "rr"))
		op_rr(a, b, 0);
	else if (!strcmp(line, "rra"))
		op_rra(a, 0);
	else if (!strcmp(line, "rrb"))
		op_rrb(b, 0);
	else if (!strcmp(line, "rrr"))
		op_rrr(a, b, 0);	
	else
		error_exit(a, b);
}