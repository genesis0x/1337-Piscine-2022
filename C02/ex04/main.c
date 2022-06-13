#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	int		i;
	char	*str[5];

	i = 0;
	str[0] = "abcdefghijklmnopqrstuvwxyz";
	str[1] = "\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6A\x6B\x6C\x6D";
	str[2] = "\x6E\x6F\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7A";
	str[3] = "`abcdefghijklmnopqrstuvwxyz{";
	str[4] = "";
	while (i < 5)
		printf("%d\n", ft_str_is_lowercase(str[i++]));
	return (0);
}
