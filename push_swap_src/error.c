/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:46:15 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:59:43 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(t_intarray a, t_intarray b, int flag)
{
	if (flag == 1)
		ft_putstr_fd ("Error\n", 2);
	exit_free(a, b);
}

void	exit_free(t_intarray a, t_intarray b)
{
	if (a)
		destroy_intarray(a);
	if (b)
		destroy_intarray(b);
	exit (0);
}
