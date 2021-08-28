/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 13:07:09 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 13:15:38 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	set_intarray(t_intarray tab, int index, int value)
{
	if ((index < 0) || (index >= tab->len))
	{	
		ft_putstr ("set_intarray :\nIndex est invalid\n");
		return ;
	}	
	tab->data[index] = value;
}

int	length_intarray(t_intarray tab)
{
	return (tab->len);
}

int	get_min_intarray(t_intarray tab)
{
	int	index_min;

	index_min = get_index_min_intarray(tab);
	return (tab->data[index_min]);
}

int	get_index_min_intarray(t_intarray tab)
{
	return (get_index_min_from_intarray(tab, 0));
}

int	get_index_min_from_intarray(t_intarray tab, int index)
{
	int	i;
	int	index_min;
	int	min;

	min = tab->data[index];
	index_min = index;
	if ((index < 0) || (index >= tab->len))
	{
		ft_putstr ("get_index_min_from_intarray : index invalid value\n");
		return (-1);
	}
	i = index + 1;
	while (i < tab->len)
	{
		if (tab->data[i] < min)
		{
			min = tab->data[i];
			index_min = i;
		}
		i++;
	}
	return (index_min);
}
