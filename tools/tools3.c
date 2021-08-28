/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:54:19 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 11:02:28 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	ext_ft_atoi(const char *str, int *x)
{
	int		i;
	long	n;
	int		neg;

	i = 0;
	n = 0;
	neg = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		n = n * 10 + (str[i++] - '0');
		if ((n > 2147483647 && !neg) || (-n < -2147483648 && neg))
			*x = 1;
	}
	if (neg)
		return ((int)(n * -1));
	return ((int)n);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * i + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

void	ft_putstr(const char *str)
{
	ft_putstr_fd(str, 1);
}

void	ft_putstr_fd(const char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
}
