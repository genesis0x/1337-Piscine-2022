#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	str1[13];
	char	str2[14];

	strcpy(str1, "Hello World!");
	strcpy(str2, str1);
	printf("%d\n", ft_strcmp(str1, str2));
	strcat(str2, "\xFF");
	printf("%d\n", ft_strcmp(str1, str2));
	strlcpy(str2, str1, 12);
	printf("%d\n", ft_strcmp(str1, str2));
	strcpy(str2, "");
	printf("%d\n", ft_strcmp(str1, str2));
	strcpy(str1, "");
	printf("%d\n", ft_strcmp(str1, str2));
	return (0);
}
