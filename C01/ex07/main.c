#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int		tab[10];
	int		i;
	int		size;

	i = 0;
	size = 10;
	while (i < size)
	{
		tab[i] = i;
		++i;
	}
	ft_rev_int_tab(tab, size);
	while (i--)
		printf("%d\n", tab[i]);
	return (0);
}
