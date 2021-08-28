/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:39:25 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:55:38 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "../intarray/intarray.h"
# include "../tools/tools.h"

void		op_sa(t_intarray stack_a, int flag);
void		op_sb(t_intarray stack_b, int flag);
void		op_ss(t_intarray stack_a, t_intarray stack_b, int flag);
void		op_pa(t_intarray stack_a, t_intarray stack_b, int flag);
void		op_pb(t_intarray stack_a, t_intarray stack_b, int flag);
void		op_ra(t_intarray stack_a, int flag);
void		op_rb(t_intarray stack_b, int flag);
void		op_rr(t_intarray stack_a, t_intarray stack_b, int flag);
void		op_rra(t_intarray stack_a, int flag);
void		op_rrb(t_intarray stack_b, int flag);
void		op_rrr(t_intarray stack_a, t_intarray stack_b, int flag);

void		op_swap(t_intarray lst);
void		op_reverse(t_intarray stack_a);
void		op_rreverse(t_intarray x);
void		op_push(t_intarray a, t_intarray b);

int			is_sorted(t_intarray lst);
void		is_it_sorted(t_intarray a, t_intarray b);

#endif