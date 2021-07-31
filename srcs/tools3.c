#include "../inc/push_swap.h"

void		op_swap(t_list **lst)
{
	int	tmp;

	tmp = (*lst)->data;
	(*lst)->data = (*lst)->next->data;
	(*lst)->next->data = tmp; 	
}

void		free_all(t_list *a, t_list *b)
{
	if (a)
		lst_free(a);
	if (b)
		lst_free(b);
}