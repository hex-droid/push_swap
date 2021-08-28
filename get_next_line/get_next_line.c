/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 10:32:54 by ztaouil           #+#    #+#             */
/*   Updated: 2021/08/28 10:39:00 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strjoint(char *line, char buffer)
{
	char	*str;
	int		i;

	i = ft_strlen(line);
	str = malloc(i + 2);
	if (!str)
		return (0);
	i = 0;
	while (line[i])
	{
		str[i] = line[i];
		i++;
	}
	str[i] = buffer;
	str[i + 1] = '\0';
	free(line);
	line = NULL;
	return (str);
}

int	get_next_line(char **line)
{
	char	*buffer;
	int		n;

	buffer = (char *)malloc(2);
	*line = malloc(1);
	if (!line || !buffer || !(*line))
		return (-1);
	*line[0] = '\0';
	n = read(0, buffer, 1);
	while (n > 0)
	{
		if (buffer[0] == '\n')
			break ;
		*line = ft_strjoint(*line, buffer[0]);
		n = read(0, buffer, 1);
	}
	free(buffer);
	buffer = NULL;
	return (n);
}
