#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	int		i;
	char	*src[5];

	i = 0;
	src[0] = "Hello World!";
	src[1] = "Bye People!";
	src[2] = "\x48\x65\x6C\x6C\x6F\x20\x57\x6F\x72\x6C\x64\x21";
	src[3] = "\x34\x32\xFF\x00";
	src[4] = "\t\n\v\f\r";
	while (i < 5)
		printf("%s\n", ft_strdup(src[i++]));
	return (0);
}
