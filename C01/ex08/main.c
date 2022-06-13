#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int		tab[5];
	int		i;
	int		size;

	i = 0;
	size = 5;
	while (i < size)
		tab[i++] = rand();
	ft_sort_int_tab(tab, size);
	while (i--)
		printf("%d\n", tab[i]);
	return (0);
}
