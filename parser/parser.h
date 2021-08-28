/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:45:22 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:57:28 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "../intarray/intarray.h"
# include "../tools/tools.h"

int		is_num(char *str);
int		is_nu(char c);
int		load_data(char **av, t_intarray a);
#endif