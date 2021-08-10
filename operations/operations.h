#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "../intarray/intarray.h"
# include "../tools/tools.h"

void		op_sa(intarray stack_a, int flag);
void		op_sb(intarray stack_b, int flag);
void		op_ss(intarray stack_a, intarray stack_b, int flag);
void		op_pa(intarray stack_a, intarray stack_b, int flag);
void		op_pb(intarray stack_a, intarray stack_b, int flag);
void		op_ra(intarray stack_a, int flag);
void		op_rb(intarray stack_b, int flag);
void		op_rr(intarray stack_a, intarray stack_b, int flag);
void		op_rra(intarray stack_a, int flag);
void		op_rrb(intarray stack_b, int flag);
void		op_rrr(intarray stack_a, intarray stack_b, int flag);

void		op_swap(intarray lst);
void		op_reverse(intarray stack_a);
void		op_rreverse(intarray x);
void		op_push(intarray a, intarray b);

int		is_sorted(intarray lst);
void		is_it_sorted(intarray a, intarray b);

#endif