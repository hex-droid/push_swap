#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>
# include <errno.h>
# include "../memory_tracking/memory_tracking.h"
# include "../tools/tools.h"
# include "../intarray/intarray.h"
# include "../parser/parser.h"
# include "../operations/operations.h"

# define GREEN "\e[1;32m"
# define RED "\e[0;31m"
# define WHT "\e[0;37m"
# define YEL "\e[1;33m"
# define BLU "\e[1;34m"

typedef struct s_variables
{
	int	*moves;
	int	size;
	int	asize;
	int	fsize;
	int	i;
	int	j;
	int	k;
	int	index_move;
	int	closest;
	int	min_index;
	int	min_val;
}	t_variables;

void		lock_load(int ac, char **av, intarray a, intarray b);
void		error_exit(intarray a, intarray b, int flag);
void		exit_free(intarray a, intarray b);

void		visualize(intarray a, intarray b);

void		sort(intarray a, intarray b);
void		sort_2_elem(intarray a, intarray b);
void		sort_3_elem(intarray a, intarray b);
void		ext_sort_3_elem(intarray a);
void		sort_4_elem(intarray a, intarray b);
void		sort_5_elem(intarray a, intarray b);

void		min_pb(intarray a, intarray b);
void		sp_min_pb(intarray a, intarray b, int len, int pos);
void		ext_min_pb(intarray a, intarray b, int len, int pos);

void		bigsort(intarray a, intarray b);
void		ext_bigsort(intarray a, t_variables *vars);

void		compute_op(intarray a, intarray b, t_variables *vars);
void		pb_nmin_nmax(intarray a, intarray b);
void		ext_pb_nmin_nmax(intarray a, intarray b, int mid);
int		get_index_closest(intarray x, int val);
int		get_index_move(int *tab, int size);
void		get_b_top(intarray b, t_variables *vars);
void		get_a_top(intarray a, t_variables *vars);
void		finish(intarray a, t_variables *vars);

int		is_odd(int nb);

#endif
