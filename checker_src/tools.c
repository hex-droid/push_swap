/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:05:51 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:54:38 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_execute(t_intarray a, t_intarray b, char *line)
{
	if (!ft_strcmp(line, "pa"))
		op_pa(a, b, 0);
	else if (!ft_strcmp(line, "pb"))
		op_pb(a, b, 0);
	else if (!ft_strcmp(line, "sa"))
		op_sa(a, 0);
	else if (!ft_strcmp(line, "sb"))
		op_sb(b, 0);
	else if (!ft_strcmp(line, "ss"))
		op_ss(a, b, 0);
	else if (!ft_strcmp(line, "ra"))
		op_ra(a, 0);
	else if (!ft_strcmp(line, "rb"))
		op_rb(b, 0);
	else if (!ft_strcmp(line, "rr"))
		op_rr(a, b, 0);
	else if (!ft_strcmp(line, "rra"))
		op_rra(a, 0);
	else if (!ft_strcmp(line, "rrb"))
		op_rrb(b, 0);
	else if (!ft_strcmp(line, "rrr"))
		op_rrr(a, b, 0);
	else
		error_exit(a, b, 1);
}
