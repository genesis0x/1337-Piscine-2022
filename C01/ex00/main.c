#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int		*nbr;
	int		tmp;

	tmp = 21;
	nbr = &tmp;
	ft_ft(nbr);
	printf("%d", *nbr);
	return (0);
}
