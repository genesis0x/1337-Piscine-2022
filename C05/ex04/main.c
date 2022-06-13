#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	int		index[8];
	int		i;

	index[0] = -2147483648;
	index[1] = -1;
	index[2] = 0;
	index[3] = 1;
	index[4] = 2;
	index[5] = 3;
	index[6] = 10;
	index[7] = 47;
	i = 0;
	while (i < 8)
		printf("%d\n", ft_fibonacci(index[i++]));
	return (0);
}
