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

void		lst_free(t_list *lst)
{
	while (lst != NULL)
	{
		t_list *tmp = lst;
		lst = lst->next;
		tools_free(tmp, sizeof(t_list));
	}
}

void		lst_delete_last(t_list **lst)
{
	t_list *temp;

	temp = *lst;
	if (*lst == NULL)
		return ;
	if ((*lst)->next == NULL)
		return ;
	while (temp->next->next != NULL)
		temp = temp->next;
	tools_free(temp->next, sizeof(t_list));
	temp->next = NULL;
}

size_t		lst_size(t_list *lst)
{
	size_t	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst->next)
	{
		i++;
		lst = lst->next;
	}
	i++;
	return (i);
}

void		lst_delete_first(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	if (lst == NULL)
		return ;
	*lst = (*lst)->next;
	temp->next = NULL;
	tools_free(temp, sizeof(t_list));
}