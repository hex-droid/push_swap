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
# define ATOI 981231


void		error_exit(intarray a, const char *str);
void		exit_free(intarray a, intarray b);

void		visualize(intarray a, intarray b);

void		sort(intarray a, intarray b);
void		sort_3_elem(intarray a, intarray b);
void		sort_5_elem(intarray a, intarray b);

#endif
