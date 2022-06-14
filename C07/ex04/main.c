#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s", (ft_convert_base(av[1], av[2], av[3])));
}