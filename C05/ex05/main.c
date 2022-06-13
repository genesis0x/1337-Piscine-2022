#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	int		nb[7];
	int		i;

	nb[0] = -2147483648;
	nb[1] = -1;
	nb[2] = 0;
	nb[3] = 1;
	nb[4] = 64;
	nb[5] = 2147395600;
	nb[6] = 2147483647;
	i = 0;
	while (i < 7)
		printf("%d\n", ft_sqrt(nb[i++]));
	return (0);
}
