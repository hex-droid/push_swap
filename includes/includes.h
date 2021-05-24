/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 09:53:08 by ztaouil           #+#    #+#             */
/*   Updated: 2021/05/24 10:09:46 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct _stack s_stack;
typedef struct _stack *t_stack;

struct  _stack
{
	int         *data;
	int         size;
	int         top_index;
};

t_stack         stack_construct(int size);
int             stack_pop(t_stack s);
int             stack_push(t_stack s, int i);
void            stack_destroy(t_stack s);
int             stack_exists(t_stack s, int value);
int             stack_size(t_stack s);
int             stack_is_empty(t_stack s);
int             stack_is_full(t_stack s);

void            op_swap(t_stack s);
void            op_push(t_stack to, t_stack from);
void            op_rotate(t_stack s);
void            op_reverse_rotate(t_stack s);

void            op_sa(t_stack a, t_stack b);
void            op_sb(t_stack a, t_stack b);
void            op_ss(t_stack a, t_stack b);
void            op_pa(t_stack a, t_stack b);
void            op_pb(t_stack a, t_stack b);
void            op_ra(t_stack a, t_stack b);
void            op_rb(t_stack a, t_stack b);
void            op_rr(t_stack a, t_stack b);
void            op_rra(t_stack a, t_stack b);
void            op_rrb(t_stack a, t_stack b);
void            op_rrr(t_stack a, t_stack b);

int             stack_is_sorted(t_stack s); // null if not sorted
void            checker(t_stack a);

void            stack_debug1(t_stack s);
void            stack_debug2(t_stack a, t_stack b);


int				get_next_line(char **line);
char         	*ft_strjoin(char *line, char buffer);
int				ft_strlen(const char *s);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(const char *str, int fd);
int        		ft_is_num(char c);
int         	is_valid_int(char *s);
int          	cmp(char *s1, char *s2);
void        	check_line(char *line, t_stack a, t_stack b);

void       		error_handle(const char *message);

//		PUSH SWAP

void			sort_3_elem(t_stack a, t_stack b);
int				stack_get_min_index(t_stack s);
int				stack_get_max_index(t_stack s);
int             stack_get_min(t_stack s);
int				stack_get_max(t_stack s);



#endif
