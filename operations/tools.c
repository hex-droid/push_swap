#include "operations.h"

int		is_sorted(intarray lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (i < lst->len - 1)
	{
		if (get_intarray(lst, i + 1) < get_intarray(lst, i))
			return (0);
		i++;
	}
	return (1);
}

void		is_it_sorted(intarray a, intarray b)
{
	if (length_intarray(b) != 0)
	{
		ft_putstr("KO\n");
		return ;
	}
	if (is_sorted(a))
	{	
		ft_putstr("OK\n");
		return ;
	}
	ft_putstr("KO!\n");
}