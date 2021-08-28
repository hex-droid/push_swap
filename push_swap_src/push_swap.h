/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:46:26 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:55:31 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>
# include <errno.h>
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

void		lock_load(int ac, char **av, t_intarray a, t_intarray b);
void		error_exit(t_intarray a, t_intarray b, int flag);
void		exit_free(t_intarray a, t_intarray b);

void		sort(t_intarray a, t_intarray b);
void		sort_2_elem(t_intarray a, t_intarray b);
void		sort_3_elem(t_intarray a, t_intarray b);
void		ext_sort_3_elem(t_intarray a);
void		sort_4_elem(t_intarray a, t_intarray b);
void		sort_5_elem(t_intarray a, t_intarray b);

void		min_pb(t_intarray a, t_intarray b);
void		sp_min_pb(t_intarray a, t_intarray b, int len, int pos);
void		ext_min_pb(t_intarray a, t_intarray b, int len, int pos);

void		bigsort(t_intarray a, t_intarray b);
void		ext_bigsort(t_intarray a, t_variables *vars);

void		compute_op(t_intarray a, t_intarray b, t_variables *vars);
void		pb_nmin_nmax(t_intarray a, t_intarray b);
void		ext_pb_nmin_nmax(t_intarray a, t_intarray b, int mid);
int			get_index_closest(t_intarray x, int val);
int			get_index_move(int *tab, int size);
void		get_b_top(t_intarray b, t_variables *vars);
void		get_a_top(t_intarray a, t_variables *vars);
void		ra_rra(t_intarray a, t_variables *vars);

int			is_odd(int nb);

#endif
