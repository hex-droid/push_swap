/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:07:58 by ztaouil           #+#    #+#             */
/*   Updated: 2021/05/24 13:17:17 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/includes.h"

intarray	stack_to_intarray(t_stack a)
{
	int	i;
	intarray tab;

	tab = empty_create_intarray(stack_size(a));
	for (i = 0; i <= a->top_index; i++)
		add_intarray(tab, a->data[i]);
	return (tab);
}

int				stack_get_min_index(t_stack s)
{
	int		i;
	int		min;

	if (stack_is_empty(s))
		error_handle("Stack is empty!");
	i = s->top_index;
	min = s->top_index;
	while (i >= 0)
	{
		if (s->data[min] > s->data[i])
			min = i;
		i--;
	}	
	return (min);
}

int				stack_get_max_index(t_stack s)
{
	int		i;
	int		max;

	if (stack_is_empty(s))
		error_handle("Stack is empty!");
	i = s->top_index;
	max = s->top_index;
	while (i >= 0)
	{
		if (s->data[max] < s->data[i])
			max = i;
		i--;
	}
	return (max);
}

int             stack_get_min(t_stack s)
{
	int		min;

	min = s->data[stack_get_min_index(s)];
	return (min);
}

int				stack_get_max(t_stack s)
{
	int		max;

	max = s->data[stack_get_max_index(s)];
	return (max);
}

float			stack_median(t_stack s)
{
	intarray    tab;
    float       median;

	tab = stack_to_intarray(s);
    median = median_intarray(tab);
	destroy_intarray(tab);
	return (median);
}