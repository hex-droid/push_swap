#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include <stdio.h>

# include "../intarray/intarray.h"
# include "../parser/parser.h"
# include "../operations/operations.h"
# include "../push_swap_src/push_swap.h"
# include "../get_next_line/get_next_line.h"
# include "../tools/tools.h"

void		check_execute(intarray a, intarray b, char *line);
void		read_execute(intarray a, intarray b);
void		fault_check(int ac, char **av, intarray a, intarray b);

#endif