#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	int		i;
	char	*str[4];

	i = 0;
	str[0] = "0123456789";
	str[1] = "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39";
	str[2] = "/0123456789:";
	str[3] = "";
	while (i < 4)
		printf("%d\n", ft_str_is_numeric(str[i++]));
	return (0);
}
