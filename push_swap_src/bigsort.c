#include "push_swap.h"

void		bigsort(intarray a, intarray b)
{
	int	range;
	int	i;
	int	iter = 0;

	i = 0;
	range = get_min_intarray(a);
	int len = length_intarray(a);
	while (length_intarray(a) != 0)
	{
		i = 0;
		while (i < length_intarray(a))
		{
			if (get_intarray(a, i) <= range)
			{
				sp_min_pb(a, b, length_intarray(a), i + 1);
			}
			i++;
		}
		range += 30;
		iter++;
	}
	exit(0);
	ext_bigsort(a, b);
	printf ("Iteration number1 : %d\n", iter);
	printf ("size		%d\n", len);

}

void		ext_bigsort(intarray a, intarray b)
{
	int i = 0;

	while (length_intarray(b) != 0)
	{
		max_pa(a, b);i++;
	}
	printf ("Iteration number2 : %d\n", i);
}