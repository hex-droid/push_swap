#include "../inc/push_swap.h"

static char	*ft_strjoint(char *line, char buffer)
{
	char *str;
	int i = ft_strlen(line);

	if (!(str = (char *)malloc(i + 2)))
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

int		get_next_line(char **line)
{
	char *buffer;
	int		n;

	buffer = (char *)malloc(2);
	if (!line || !buffer || !(*line = (char *)malloc(1)))
		return (-1);
	*line[0] = '\0';
	while ((n = read(0, buffer, 1)) > 0)
	{
		if (buffer[0] == '\n')
			break ;
		*line = ft_strjoint(*line, buffer[0]);
	}
	free(buffer);
	buffer = NULL;
	return (n);
}