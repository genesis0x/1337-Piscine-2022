#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int		nb[6];
	int		power[4];
	int		i;
	int		j;

	nb[0] = -2147483648;
	nb[1] = -1;
	nb[2] = 0;
	nb[3] = 1;
	nb[4] = 5;
	nb[5] = 2147483647;
	power[0] = -1;
	power[1] = 0;
	power[2] = 1;
	power[3] = 5;
	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 4)
			printf("%d\n", ft_recursive_power(nb[i], power[j++]));
		++i;
	}
	return (0);
}
