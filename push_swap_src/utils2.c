/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:46:33 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 12:01:02 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_pb(t_intarray a, t_intarray b)
{
	int	pos;
	int	len;

	len = length_intarray(a);
	pos = get_index_min_intarray(a) + 1;
	sp_min_pb(a, b, len, pos);
}

void	sp_min_pb(t_intarray a, t_intarray b, int len, int pos)
{
	if (pos <= 2)
	{
		if (pos > 1)
			op_sa(a, 1);
		op_pb(a, b, 1);
	}
	else
		ext_min_pb(a, b, len, pos);
}

void	ext_min_pb(t_intarray a, t_intarray b, int len, int pos)
{
	if ((is_odd(len) == 1 && pos <= (len / 2) + 1)
		|| (is_odd(len) == 0 && pos <= len / 2))
	{
		while (pos > 1)
		{
			op_ra(a, 1);
			pos--;
		}
	}
	else if ((is_odd(len) == 1 && pos > (len / 2))
		|| (is_odd(len) == 0 && pos > (len / 2)))
	{
		while (pos <= len)
		{
			op_rra(a, 1);
			pos++;
		}
	}
	op_pb(a, b, 1);
}

int	is_odd(int nb)
{
	if (nb % 2 == 0)
		return (0);
	return (1);
}
