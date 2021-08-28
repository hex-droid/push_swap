/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:05:40 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 12:01:17 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	fault_check(int ac, char **av, t_intarray a, t_intarray b)
{
	if (ac == 1)
		exit (0);
	if (load_data(av, a) == 0)
		error_exit(a, b, 1);
	if (is_sorted(a))
	{	
		ft_putstr_fd("OK\n", 1);
		error_exit(a, b, 0);
	}
}

void	read_execute(t_intarray a, t_intarray b)
{
	char	*line;

	while (get_next_line(&line) > 0)
	{
		check_execute(a, b, line);
		free (line);
		line = NULL;
	}
	free (line);
	line = NULL;
	is_it_sorted(a, b);
}

int	main(int ac, char **av)
{
	t_intarray	a;
	t_intarray	b;

	a = standard_empty_create_intarray();
	b = standard_empty_create_intarray();
	fault_check(ac, av, a, b);
	read_execute(a, b);
	destroy_intarray(a);
	destroy_intarray(b);
}
