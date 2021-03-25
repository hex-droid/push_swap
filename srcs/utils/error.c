#include "../../includes/includes.h"

void        ft_putchar_fd(char c, int fd)
{
	write(1, &c, fd);
}

void		ft_putstr_fd(const char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}

void		error_handle(const char *message)
{
	ft_putstr_fd("Error:\n", 2);
	ft_putstr_fd(message, 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_SUCCESS);
}