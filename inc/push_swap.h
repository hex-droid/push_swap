#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include "../memory_tracking/memory_tracking.h"


typedef struct s_list
{
	int		data;
	struct s_list	*next;
}	t_list;

t_list		*lst_new(int data);
void		lst_add_back(t_list **alst, t_list *lst);
t_list		*lst_last(t_list *lst);
void		lst_debug(t_list *lst);
void		lst_free(t_list *lst);
t_list		*lst_delete_last(t_list *lst);

int		is_valid(t_list *lst, const char *str);
void		error_exit(t_list *lst, const char *str);
int		is_num(const char *str);
int		is_nu(char c);

int		is_duplicata(t_list *lst, const char *str);
void		load_data(char **av, t_list **lst);



#endif