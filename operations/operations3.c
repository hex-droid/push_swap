/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:40:59 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:56:47 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	op_push(t_intarray a, t_intarray b)
{
	if (!length_intarray(a))
		return ;
	add_intarray(b, get_intarray(a, 0));
	op_rrb(b, 0);
	delete_intarray(a, 0);
}

void	op_pb(t_intarray stack_a, t_intarray stack_b, int flag)
{
	op_push(stack_a, stack_b);
	if (flag)
		ft_putstr("pb\n");
}

void	op_ra(t_intarray stack_a, int flag)
{	
	op_reverse(stack_a);
	if (flag)
		ft_putstr("ra\n");
}

void	op_reverse(t_intarray stack_a)
{
	t_intarray	clone;
	int			i;

	clone = clone_intarray(stack_a);
	i = 0;
	if (!length_intarray(stack_a))
		return ;
	while (i < clone->len - 1)
	{
		set_intarray(stack_a, i, get_intarray(clone, i + 1));
		i++;
	}
	set_intarray(stack_a, i, get_intarray(clone, 0));
	destroy_intarray(clone);
}

void	op_rb(t_intarray stack_b, int flag)
{
	op_reverse(stack_b);
	if (flag)
		ft_putstr("rb\n");
}
