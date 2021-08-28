/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:50:17 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:02:46 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	ret;

	n = 0;
	ret = ext_ft_atoi(str, &n);
	return (ret);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
