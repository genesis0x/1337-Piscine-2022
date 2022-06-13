#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int		nb[6];
	int		i;

	nb[0] = -2147483648;
	nb[1] = -1;
	nb[2] = 0;
	nb[3] = 1;
	nb[4] = 12;
	nb[5] = 13;
	i = 0;
	while (i < 6)
		printf("%d\n", ft_recursive_factorial(nb[i++]));
	return (0);
}
