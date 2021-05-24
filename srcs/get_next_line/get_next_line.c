/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaouil <ztaouil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:07:05 by ztaouil           #+#    #+#             */
/*   Updated: 2021/05/24 13:07:06 by ztaouil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/includes.h"

int         ft_strlen(const char *s)
{
    int     i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char        *ft_strjoin(char *line, char buffer)
{
    char    *ret;
    int     i;

    i = ft_strlen(line);
    if (!(ret = (char *)malloc(i + 2)))
        return (0);
    i = 0;
    while (line[i])
    {
        ret[i] = line[i];
        i++;
    }
    ret[i] = buffer;
    ret[i + 1] = '\0';
    free(line);
    line = NULL;
    return (ret);
}

int         get_next_line(char **line)
{
    char    *buffer;
    int     n;

    buffer = (char *)malloc(2);
    if (!buffer || !line || !(*line = (char *)malloc(1)))
        return (-1);
    *line[0] = '\0';
    while ((n = read(0, buffer, 1)) > 0)
    {
        if (buffer[0] == '\n')
            break ;
        *line = ft_strjoin(*line, buffer[0]);
    }
    free(buffer);
    buffer = NULL;
    return (n);
}