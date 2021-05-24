/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:06:08 by ztaouil           #+#    #+#             */
/*   Updated: 2021/05/24 13:06:09 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void            op_swap(t_stack s)
{
	int tmp;

	if (s->top_index > 1)
	{
		tmp = s->data[s->top_index - 1];
		s->data[s->top_index - 1] = s->data[s->top_index];
		s->data[s->top_index] = tmp;
	}
}

void            op_push(t_stack to, t_stack from)
{
	if (stack_is_empty(from) || stack_is_full(to))
		return ;
	to->top_index++;
	to->data[to->top_index] = from->data[from->top_index];
	from->top_index--;
}
/**
 *  6   data[5]         5
 *  5   data[4]         8
 *  8   data[3]         16
 *  16  data[2]         12
 *  12  data[1]         3
 *  3   data[0]         6 
 */
void            op_rotate(t_stack s)
{
	int temp;
	int i;

	i = s->top_index;
	temp = s->data[s->top_index];
	while (i > 0)
	{
		s->data[i] = s->data[i - 1];
		i--;
	}
	s->data[0] = temp;
}

void            op_reverse_rotate(t_stack s)
{
	int	temp;
	int	i;

	temp = s->data[0];
	i = 0;
	while (i < stack_size(s) - 1)
	{
		s->data[i] = s->data[i + 1];
		i++;
	}
	s->data[s->top_index] = temp;
}	