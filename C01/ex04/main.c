#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int		a;
	int		b;

	a = -2147483648;
	b = 2147483647;
	ft_ultimate_div_mod(&a, &b);
	printf("%d<--->%d", a, b);
	return (0);
}
