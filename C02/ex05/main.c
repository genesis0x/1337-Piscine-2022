#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	int		i;
	char	*str[5];

	i = 0;
	str[0] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	str[1] = "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4A\x4B\x4C\x4D";
	str[2] = "\x4E\x4F\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5A";
	str[3] = "@ABCDEFGHIJKLMNOPQRSTUVWXYZ[";
	str[4] = "";
	while (i < 5)
		printf("%d\n", ft_str_is_uppercase(str[i++]));
	return (0);
}
