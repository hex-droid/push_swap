/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 13:06:38 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 13:22:56 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	clone_intarray(t_intarray tab)
{
	int			i;
	t_intarray	copy;

	copy = create_intarray(tab->len);
	i = 0;
	while (i < copy->len)
	{
		copy->data[i] = tab->data[i];
		i++;
	}
	return (copy);
}

float	median_intarray(t_intarray tab)
{
	t_intarray	copy;
	float		median;
	int			v1;
	int			v2;

	copy = clone_intarray(tab);
	sort1_intarray(copy);
	if (tab->len == 0)
		return (-1.0);
	if (copy->len % 2 == 0)
	{
		v1 = copy->data[(copy->len - 1) / 2];
		v2 = copy->data[(copy->len) / 2];
		median = ((float)(v1 + v2) / 2);
	}	
	else
	{	
		median = (copy->data[(copy->len - 1) / 2]);
		(void)v1;
		(void)v2;
	}
	destroy_intarray(copy);
	return (median);
}

int	get_max_intarray(t_intarray tab)
{
	int	index_max;

	index_max = get_index_max_intarray(tab);
	return (tab->data[index_max]);
}

int	get_index_max_intarray(t_intarray tab)
{
	int	index_max;

	index_max = get_index_max_from_intarray (tab, 0);
	return (index_max);
}

int	get_index_max_from_intarray(t_intarray tab, int index)
{
	int	max;
	int	index_max;
	int	i;

	index_max = index;
	max = tab->data[index];
	if ((index < 0) || (index >= tab->len))
	{
		ft_putstr ("get_index_max_from_intarray : index invalid value\n");
		return (-1);
	}
	i = index + 1;
	while (i < tab->len)
	{
		if (tab->data[i] > max)
		{
			max = tab->data[i];
			index_max = i;
		}
		i++;
	}
	return (index_max);
}
