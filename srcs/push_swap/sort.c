/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:08:35 by ztaouil           #+#    #+#             */
/*   Updated: 2021/05/24 13:24:48 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/includes.h"

void			stack_search_compare_pb(t_stack a, t_stack b, int median)
{
	for (int i = 0; i < stack_size(a); i++)
	{	
		if (a->data[a->top_index] < median)
			op_pb(a, b);
		op_ra(a, b);
	}
}

/*
    
*/

void			sort_3_elem(t_stack a, t_stack b)
{
    float	median;
	
    if (stack_is_sorted(a))
        return ;
    median = stack_median(a);
	stack_search_compare_pb(a, b, median);
	(void)b;
}