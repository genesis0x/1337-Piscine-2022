#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	int		i;
	char	str[6][29];

	i = 0;
	strcpy(str[0], "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	strcpy(str[1], "abcdefghijklmnopqrstuvwxyz");
	strcpy(str[2], "\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6A\x6B\x6C\x6D");
	strcpy(str[3], "\x6E\x6F\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7A");
	strcpy(str[4], "`abcdefghijklmnopqrstuvwxyz{");
	strcpy(str[5], "");
	while (i < 6)
		printf("%s\n", ft_strupcase(str[i++]));
	return (0);
}
