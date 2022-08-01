#include <stdio.h>

int     main(int ac, char **av)
{
	(void)ac;

	char **arr = ft_split(av[1]);

	int i = 0;
	while (arr[i])
	{
		printf("[%s]\n", arr[i]);
		++i;
	}
}
