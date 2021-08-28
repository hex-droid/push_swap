/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:40:05 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:56:05 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	op_rr(t_intarray stack_a, t_intarray stack_b, int flag)
{
	op_ra(stack_a, 0);
	op_rb(stack_b, 0);
	if (flag)
		ft_putstr("rr\n");
}

void	op_rreverse(t_intarray stack_a)
{
	t_intarray	clone;
	int			i;

	clone = clone_intarray(stack_a);
	i = 0;
	if (!length_intarray(stack_a))
		return ;
	set_intarray(stack_a, i, get_intarray(clone, clone->len - 1));
	while (i < clone->len - 1)
	{
		i++;
		set_intarray(stack_a, i, get_intarray(clone, i - 1));
	}
	destroy_intarray(clone);
}

void	op_rra(t_intarray stack_a, int flag)
{
	op_rreverse(stack_a);
	if (flag)
		ft_putstr("rra\n");
}

void	op_rrb(t_intarray stack_b, int flag)
{
	op_rreverse(stack_b);
	if (flag)
		ft_putstr("rrb\n");
}

void	op_rrr(t_intarray stack_a, t_intarray stack_b, int flag)
{
	if (stack_a)
		op_rra(stack_a, 0);
	if (stack_b)
		op_rrb(stack_b, 0);
	if (flag)
		ft_putstr("rrr\n");
}
