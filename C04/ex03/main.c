#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	int		i;
	char	*str[8];

	i = 0;
	str[0] = "-2147483648";
	str[1] = "-1";
	str[2] = "0";
	str[3] = "1";
	str[4] = "2147483647";
	str[5] = "   ---+--+1234ab567";
	str[6] = "\t\n\v\f\r -+-+-+00000";
	str[7] = "--042";
	while (i < 8)
		printf("%d\n", ft_atoi(str[i++]));
	return (0);
}
