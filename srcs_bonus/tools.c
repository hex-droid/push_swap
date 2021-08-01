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

void		is_it_sorted(t_list *a, t_list *b)
{
	if (b)
	{
		ft_putstr("KO!\n");
		return ;
	}
	if (is_sorted(a))
	{	
		ft_putstr("OK!\n");
		return ;
	}
	ft_putstr("KO!\n");
}

void		check_execute(t_list **a, t_list **b, char *line)
{
	if (!strcmp(line, "pa"))	
		op_pa(a, b);
	else if (!strcmp(line, "pb"))	
		op_pb(a, b);
	else if (!strcmp(line, "sa"))
		op_sa(a);
	else if (!strcmp(line, "sb"))
		op_sb(b);
	else if (!strcmp(line, "ss"))
		op_ss(a, b);
	else if (!strcmp(line, "ra"))
		op_ra(a);
	else if (!strcmp(line, "rb"))
		op_rb(b);
	else if (!strcmp(line, "rr"))
		op_rr(a, b);
	else if (!strcmp(line, "rra"))
		op_ra(a);
	else if (!strcmp(line, "rrb"))
		op_rb(b);
	else if (!strcmp(line, "rrr"))
		op_rr(a, b);	
	else
		error_exit(*a, *b, "Invalid Operation.");
}