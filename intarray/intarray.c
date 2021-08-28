/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 12:56:47 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 13:23:57 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intarray.h"

void	destroy_intarray(t_intarray tab)
{
	free (tab->data);
	free (tab);
}

t_intarray	standard_empty_create_intarray(void)
{
	return (empty_create_intarray(INTARRAY_ALLOC));
}

void	aux_create_intarray(t_intarray tab)
{
	int	i;

	i = 0;
	if (tab->alloc <= 0)
		tab->alloc = 4;
	tab->data = malloc (tab->alloc * sizeof(int));
	while (i < tab->alloc)
	{
		tab->data[i] = 0;
		i++;
	}
}
