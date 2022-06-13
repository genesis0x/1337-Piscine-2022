#include "ft.h"

int		main(void)
{
	int		a;
	int		b;
	char		*str[2];
	char		c;

	a = -2147483648;
	b = 2147483647;
	str[0] = "Hello World!";
	str[1] = "Bye People!";
	c = 'A';
	ft_putchar(c);
	ft_swap(&a, &b);
	ft_putstr(str[0]);
	ft_strlen(str[1]);
	ft_strcmp(str[0], str[1]);
	return (0);
}
