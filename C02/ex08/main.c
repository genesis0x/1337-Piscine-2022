#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	int		i;
	char	str[6][29];

	i = 0;
	strcpy(str[0], "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	strcpy(str[1], "abcdefghijklmnopqrstuvwxyz");
	strcpy(str[2], "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4A\x4B\x4C\x4D");
	strcpy(str[3], "\x4E\x4F\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5A");
	strcpy(str[4], "@ABCDEFGHIJKLMNOPQRSTUVWXYZ[");
	strcpy(str[5], "");
	while (i < 6)
		printf("%s\n", ft_strlowcase(str[i++]));
	return (0);
}
