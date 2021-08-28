/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:07:58 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 13:23:22 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTARRAY_H
# define INTARRAY_H

# include <stdlib.h>
# include "../tools/tools.h"
# define INTARRAY_ALLOC 4

typedef struct s_intarray*	t_intarray;

struct s_intarray
{
	int		*data;
	int		len;
	int		alloc;
};

void		aux_create_intarray(t_intarray tab);
t_intarray	create_intarray(int len);
t_intarray	empty_create_intarray(int alloc);
t_intarray	standard_empty_create_intarray(void);
int			search_intarray(t_intarray tab, int n);
int			nb_occurences_intarray(t_intarray tab, int n);
int			get_intarray(t_intarray tab, int index);
void		destroy_intarray(t_intarray tab);
void		set_intarray(t_intarray tab, int index, int value);
int			length_intarray(t_intarray tab);
int			get_min_intarray(t_intarray tab);
int			get_index_min_intarray(t_intarray tab);
int			get_index_min_from_intarray(t_intarray tab, int n);
t_intarray	clone_intarray(t_intarray tab);
float		median_intarray(t_intarray tab);
void		sort1_intarray(t_intarray tab);
int			get_max_intarray(t_intarray tab);
int			get_index_max_from_intarray(t_intarray tab, int n);
int			get_index_max_intarray(t_intarray tab);
void		delete_intarray(t_intarray tab, int index);
void		add_intarray(t_intarray tab, int value);
void		ext_set_intarray(t_intarray tab, int index, int value);
void		resize_intarray(t_intarray tab, int newalloc);
#endif
