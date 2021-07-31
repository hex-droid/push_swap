#include "../inc/push_swap.h"

int		is_sorted(t_list *lst)
{
	t_list *temp;
	int	tmp;

	if (!lst)
		return (0);
	tmp = 0;
	temp = lst;
	while (temp->next)
	{
		tmp = temp->data;
		if (temp->next->data < tmp)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void		is_it_sorted(t_list *lst)
{
	if (is_sorted(lst))
	{	
		ft_putstr("OK!\n");
		return ;
	}
	ft_putstr("KO!\n");
}

void		check_execute(t_list *a, t_list *b, char *line);