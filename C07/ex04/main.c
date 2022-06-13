#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(void)
{
	int		i;
	int		j;
	char	*nbr[4];
	char	*base_to[7];

	i = 0;
	nbr[0] = "-2147483648";
	nbr[1] = "0";
	nbr[2] = "2147483647";
	nbr[3] = "\t\n\v\f\r -+-+-+042";
	base_to[0] = "01";
	base_to[1] = "0123456789";
	base_to[2] = "";
	base_to[3] = "0";
	base_to[4] = "00";
	base_to[5] = "\t\n\v\f\r ";
	base_to[6] = "+-";
	while (i < 4)
	{
		j = 0;
		while (j < 7)
			printf("%s\n", ft_convert_base(nbr[i], "0123456789", base_to[j++]));
		++i;
	}
	return (0);
}
