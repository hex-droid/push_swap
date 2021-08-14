# include "parser.h"

int		is_num(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	ext_ft_atoi(str, &flag);
	if (str[0] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (!is_nu(str[i]) || flag)
			return (0);
		i++;
	}
	return (1);
}

int		is_nu(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int		load_data(char **av, intarray a)
{
	int	i;

	i = 1;
	while (av[i] != 0)
	{
		if (is_num(av[i]))
		{	
			add_intarray(a, ft_atoi(av[i]));
			if (nb_occurences_intarray(a, ft_atoi(av[i])) > 1)
				return (0);
		}
		else
			return (0);
		i++;
	}
	return (1);	
}