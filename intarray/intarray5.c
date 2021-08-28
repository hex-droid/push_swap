/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 13:07:46 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 13:13:23 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

t_intarray	create_intarray(int len)
{
	t_intarray	tab;

	tab = malloc (sizeof(struct s_intarray));
	tab->len = len;
	tab->alloc = len;
	aux_create_intarray (tab);
	return (tab);
}

t_intarray	empty_create_intarray(int alloc)
{
	t_intarray	tab;

	tab = malloc (sizeof(struct s_intarray));
	tab->len = 0;
	tab->alloc = alloc;
	aux_create_intarray(tab);
	return (tab);
}

int	search_intarray(t_intarray tab, int n)
{
	int	i;

	i = 0;
	while (i < tab->len)
	{
		if (tab->data[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int	nb_occurences_intarray(t_intarray tab, int n)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < tab->len)
	{
		if (tab->data[i] == n)
			count++;
		i++;
	}
	return (count);
}

int	get_intarray(t_intarray tab, int index)
{
	if ((index < 0) || (index >= tab->len))
	{
		ft_putstr ("get_intarray :\nIndex invalid\n");
		return (-1);
	}
	return (tab->data[index]);
}
