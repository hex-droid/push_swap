/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:39:31 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:57:15 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

int	is_sorted(t_intarray lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (i < lst->len - 1)
	{
		if (get_intarray(lst, i + 1) < get_intarray(lst, i))
			return (0);
		i++;
	}
	return (1);
}

void	is_it_sorted(t_intarray a, t_intarray b)
{
	if (length_intarray(b) != 0)
	{
		ft_putstr("KO\n");
		return ;
	}
	if (is_sorted(a))
	{	
		ft_putstr("OK\n");
		return ;
	}
	ft_putstr("KO!\n");
}
