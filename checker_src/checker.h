/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:05:47 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:54:57 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void		check_execute(t_intarray a, t_intarray b, char *line);
void		read_execute(t_intarray a, t_intarray b);
void		fault_check(int ac, char **av, t_intarray a, t_intarray b);

#endif