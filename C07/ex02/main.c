#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int		*tmp;
	int		nb[4];
	int		i;
	int		max;

	nb[0] = -2147483648;
	nb[1] = -2;
	nb[2] = 2147483643;
	nb[3] = 42;
	i = 0;

	while (i < 4)
	{
		max = (i != 3) ? nb[i] + 4 : nb[i] - 4;
		printf("%d", ft_ultimate_range(&tmp, nb[i], max));
		if (tmp)
			printf("%d\n%d\n%d\n", tmp[0], tmp[2] ,tmp[4]);
		else
			printf("NULL");
		++i;
	}
	return (0);
}
