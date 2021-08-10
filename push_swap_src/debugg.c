#include "push_swap.h"

void		visualize(intarray a, intarray b)/*CONTAINS LEAKS*/
{
	int size_a = length_intarray(a);
	int size_b = length_intarray(b);
	int size = (size_a > size_b) ? size_a : size_b;

	printf("%s", YEL);
	printf(" ----- STACK_A -----      ----- STACK_B -----\n");
	write(1, WHT, ft_strlen(WHT));
	for (int i = 0; i < size; i++)
	{
		printf("%s      	  %-10s ~       	  %-10s||\n", BLU, (size_a > i) ? ft_itoa(get_intarray(a, i)) : " ", (size_b > i) ? ft_itoa(get_intarray(a, i)) : " ");
	}
	printf("%s", YEL);
	printf("-----------------------------------------------\n");
	write(1, WHT, ft_strlen(WHT));
}