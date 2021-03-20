#include "../../includes/includes.h"

int     is_num(char c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}

int		str_is_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_num(str[i]))
			error_handle("Invalid item !(int)");
		i++;
	}
	return (1);
}
/*
	argv[i][j]
	@param i starts from 1 to argc - 1
	@param j is equal to len to num
*/
int		check_duplicata(char **tab, char *item, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (tab[i] == item)
			return (0);
		i++;
	}
	return (1);
}

int		main()
{
	char tab[7][3] = {"op", "ac", "bp", "op", "wl", "ac", "gp"};

	for (int i = 0; i <= 7; i++)
	// 	printf("%s\n", tab[i]);
		printf("duplicata return : %d", check_duplicata(tab, "ac", i))

	return (EXIT_SUCCESS);

}