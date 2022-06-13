#include <stdio.h>
void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	int		nbr[3];
	int		i;
	int		j;
	char	*base[8];

	nbr[0] = -2147483648;
	nbr[1] = 0;
	nbr[2] = 2147483647;
	i = 0;
	base[0] = "01";
	base[1] = "0123456789";
	base[2] = "";
	base[3] = "0";
	base[4] = "00";
	base[5] = "\t\n\v\f\r ";
	base[6] = "+-";
	base[7] = "poneyvif";
	while (i < 3)
	{
		j = 0;
		while (j < 8)
			ft_putnbr_base(nbr[i], base[j++]);
		++i;
	}
	return (0);
}
