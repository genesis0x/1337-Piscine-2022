#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	int		i;
	int		j;
	char	*str[4];
	char	*base[7];

	i = 0;
	str[0] = "-2147483648";
	str[1] = "0";
	str[2] = "2147483647";
	str[3] = "\t\n\v\f\r -+-+-+042";
	base[0] = "01";
	base[1] = "0123456789";
	base[2] = "";
	base[3] = "0";
	base[4] = "00";
	base[5] = "\t\n\v\f\r ";
	base[6] = "+-";
	while (i < 4)
	{
		j = 0;
		while (j < 7)
			printf("%d\n", ft_atoi_base(str[i], base[j++]));
		++i;
	}
	return (0);
}
