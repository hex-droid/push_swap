#include "../inc/push_swap.h"

int		is_valid(t_list *lst, const char *str)
{
	if (!is_num(str))
		error_exit(lst, "stack not valid.");
	if (lst)
	{
		if (is_duplicata(lst, str))
			error_exit(lst, "dupliacata argument.");
	}
	return (1);
}

int		is_num(const char *str)
{
	int i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (!is_nu(str[i]))
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

int		is_duplicata(t_list *lst, const char *str)
{
	t_list *temp; 

	temp = lst;
	while (temp->next)
	{
		if (temp->data == ft_atoi(str))
			return (1);
		temp = temp->next;
	}
	if (temp->data == ft_atoi(str))
		return (1);
	return (0);
}

void		load_data(char **av, t_list **lst)
{
	int	i = 1;
	while (av[i] != 0)
	{
		if (is_valid(*lst, av[i]))
		{	
			if (ft_atoi(av[i]) == ATOI)
				error_exit(*lst, "Integer out of bounds.");
			lst_add_back(lst, lst_new(ft_atoi(av[i])));
		}
		i++;
	}	
}