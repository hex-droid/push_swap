#include "../inc/push_swap.h"

void		op_swap(t_list **lst)
{
	int	tmp;

	tmp = (*lst)->data;
	(*lst)->data = (*lst)->next->data;
	(*lst)->next->data = tmp; 	
}