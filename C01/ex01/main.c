#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		*g_nbr1;
int		**g_nbr2;
int		***g_nbr3;
int		****g_nbr4;
int		*****g_nbr5;
int		******g_nbr6;
int		*******g_nbr7;
int		********g_nbr8;
int		*********g_nbr9;

int		main(void)
{
	int		tmp;

	tmp = 21;
	g_nbr1 = &tmp;
	g_nbr2 = &g_nbr1;
	g_nbr3 = &g_nbr2;
	g_nbr4 = &g_nbr3;
	g_nbr5 = &g_nbr4;
	g_nbr6 = &g_nbr5;
	g_nbr7 = &g_nbr6;
	g_nbr8 = &g_nbr7;
	g_nbr9 = &g_nbr8;
	ft_ultimate_ft(g_nbr9);
	printf("%d", *********g_nbr9);
	return (0);
}
