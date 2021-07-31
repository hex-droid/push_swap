#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>
# include "../memory_tracking/memory_tracking.h"

# define GREEN "\e[1;32m"
# define RED "\e[0;31m"
# define WHT "\e[0;37m"
# define YEL "\e[1;33m"
# define BLU "\e[1;34m"

typedef struct s_list
{
	int		data;
	struct s_list	*next;
}	t_list;

t_list		*lst_new(int data);
void		lst_add_back(t_list **alst, t_list *lst);
t_list		*lst_last(t_list *lst);
void		lst_free(t_list *lst);
void		lst_delete_last(t_list **lst);
void		lst_delete_first(t_list **lst);
size_t		lst_size(t_list *lst);

int		is_valid(t_list *lst, const char *str);
int		is_duplicata(t_list *lst, const char *str);
void		error_exit(t_list *lst, const char *str);
int		is_num(const char *str);
int		is_nu(char c);

void		load_data(char **av, t_list **lst);

void		op_swap(t_list **lst);
void		op_sa(t_list **stack_a);
void		op_sb(t_list **stack_b);
void		op_ss(t_list **stack_a, t_list **stack_b);
void		op_pa(t_list **stack_a, t_list **stack_b);
void		op_pb(t_list **stack_a, t_list **stack_b);

size_t		ft_strlen(const char *str);
char		*ft_itoa(int n);
int		ft_atoi(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(const char *s);

void		lst_debug(t_list *lst);
void		visualize(t_list *a, t_list *b);

#endif
