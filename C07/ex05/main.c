#include <stdio.h>
char	**ft_split(char *str, char *charset);

int	main(int ac, char **av)
{
	(void)ac;
	char	**strs = ft_split(av[1], av[2]);
	for (int i = 0; i < 2; i++)
	{
		printf("%s\n", strs[i]);
	}
	return (0);
}
