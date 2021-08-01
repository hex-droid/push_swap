#include "../inc/push_swap.h"

void		lst_debug(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = lst;
	while (tmp->next)
	{
		printf("	%d\n", tmp->data);
		tmp = tmp->next;
	}
	printf ("	%d\n", tmp->data);
}

void		visualize(t_list *a, t_list *b)/*CONTAINS LEAKS*/
{
	t_list *curr_a;
	t_list *curr_b;

	int size_a = lst_size(a);
	int size_b = lst_size(b);
	int size = (size_a > size_b) ? size_a : size_b;

	curr_a = a;
	curr_b = b;
	printf("%s", YEL);
	printf(" ----- STACK_A -----      ----- STACK_B -----\n");
	write(1, WHT, ft_strlen(WHT));
	for (int i = 0; i < size; i++)
	{
		printf("%s      	  %-10s ~       	  %-10s||\n", BLU, (size_a > i) ? ft_itoa(curr_a->data) : " ", (size_b > i) ? ft_itoa(curr_b->data) : " ");
		if (a && curr_a->next != NULL)
			curr_a = curr_a->next;
		if (b && curr_b->next != NULL)
			curr_b = curr_b->next;
	}
	printf("%s", YEL);
	printf("-----------------------------------------------\n");
	write(1, WHT, ft_strlen(WHT));
}