#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	int		i;
	int		size;
	char	*str[3];
	char	*sep[2];

	i = 0;
	size = 3;
	str[0] = "Hello";
	str[1] = "World";
	str[2] = "\x48\x65\x6C\x6C\x6F";
	sep[0] = "<-->";
	sep[1] = ", ";
	while (i < 2)
		printf("%s\n", ft_strjoin(size, str, sep[i++]));
	return (0);
}
