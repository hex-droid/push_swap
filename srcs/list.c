#include "../inc/push_swap.h"

t_list		*lst_new(int data)
{
	t_list	*lst;

	lst = tools_malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->data = data;
	lst->next = NULL;
	return (lst);
}

void		lst_add_back(t_list **alst, t_list *lst)
{
	if (!*alst)
		*alst = lst;
	else if (alst && *alst && lst)
	{	
		t_list *last;

		last = lst_last(*alst);
		last->next = lst;
	}
}

t_list		*lst_last(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void		lst_debug(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp->next)
	{
		printf("	%d\n", tmp->data);
		tmp = tmp->next;
	}
	printf ("	%d\n", tmp->data);
}

void		lst_free(t_list *lst)
{
	while (lst != NULL)
	{
		t_list *tmp = lst;
		lst = lst->next;
		tools_free(tmp, sizeof(t_list));
	}
}

t_list		*lst_delete_last(t_list *lst)
{
	t_list *temp;

	temp = lst;
	if (lst == NULL)
		return 0;
	if (lst->next == NULL)
		return 0;
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next = NULL;
	return (lst);
}