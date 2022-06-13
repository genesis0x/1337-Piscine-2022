#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	int		i;
	char	*str[9];

	i = 0;
	str[0] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	str[1] = "abcdefghijklmnopqrstuvwxyz";
	str[2] = "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4A\x4B\x4C\x4D";
	str[3] = "\x4E\x4F\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5A";
	str[4] = "\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6A\x6B\x6C\x6D";
	str[5] = "\x6E\x6F\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7A";
	str[6] = "@ABCDEFGHIJKLMNOPQRSTUVWXYZ[";
	str[7] = "`abcdefghijklmnopqrstuvwxyz{";
	str[8] = "";
	while (i < 9)
		printf("%d\n", ft_str_is_alpha(str[i++]));
	return (0);
}
