/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:39:22 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:57:03 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	op_sa(t_intarray stack_a, int flag)
{
	op_swap(stack_a);
	if (flag)
		ft_putstr("sa\n");
}

void	op_swap(t_intarray lst)
{
	if (length_intarray(lst) < 2)
		return ;
	swap_int(&lst->data[0], &lst->data[1]);
}

void	op_sb(t_intarray stack_b, int flag)
{
	op_swap(stack_b);
	if (flag)
		ft_putstr("sb\n");
}

void	op_ss(t_intarray stack_a, t_intarray stack_b, int flag)
{
	op_sa(stack_a, 0);
	op_sb(stack_b, 0);
	if (flag)
		ft_putstr("ss\n");
}

void	op_pa(t_intarray stack_a, t_intarray stack_b, int flag)
{
	op_push(stack_b, stack_a);
	if (flag)
		ft_putstr("pa\n");
}
