/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 13:06:09 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 13:29:15 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	delete_intarray(t_intarray tab, int index)
{
	int	i;

	if ((index >= tab->len) || (index < 0))
	{
		ft_putstr ("delete_intarray: index invalid\n");
		return ;
	}
	i = index + 1;
	while (i < tab->len)
	{
		tab->data[i - 1] = tab->data[i];
		i++;
	}
	tab->len--;
}

void	resize_intarray(t_intarray tab, int newalloc)
{
	int		*newdata;
	int		i;

	newdata = malloc (sizeof (int) * newalloc);
	i = 0;
	while (i < tab->len)
	{
		newdata[i] = tab->data[i];
		i++;
	}
	free (tab->data);
	tab->data = newdata;
	tab->alloc = newalloc;
}

void	ext_set_intarray(t_intarray tab, int index, int value)
{
	int	i;

	if (index < 0)
	{
		ft_putstr ("ext_set_intarray : index negative");
		return ;
	}
	if (index < tab->len)
	{
		tab->data[index] = value;
		return ;
	}
	if (index >= tab->alloc)
		resize_intarray (tab, 1 + 2 * index);
	i = tab->len;
	while (i < index)
	{
		tab->data[i] = 0;
		i++;
	}
	tab->data[index] = value;
	if (index >= tab->len)
		tab->len = index + 1;
}

void	add_intarray(t_intarray tab, int value)
{
	ext_set_intarray(tab, tab->len, value);
}

void	sort1_intarray(t_intarray tab)
{
	int	i;
	int	index_min;

	i = 0;
	while (i <= tab->len - 2)
	{
		index_min = get_index_min_from_intarray(tab, i);
		swap_int(tab->data + index_min, tab->data + i);
		i++;
	}
}
