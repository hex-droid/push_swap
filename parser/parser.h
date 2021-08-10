#ifndef PARSER_H
# define PARSER_H

# include "../intarray/intarray.h"
# include "../tools/tools.h"

int		is_num(const char *str);
int		is_nu(char c);
int		load_data(char **av, intarray a);
#endif