#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char	str1[13];
	char	str2[14];

	strcpy(str1, "Hello World!");
	strcpy(str2, str1);
	printf("%d\n", ft_strncmp(str1, str2, 12));
	strcat(str2, "\xFF");
	printf("%d\n", ft_strncmp(str1, str2, 13));
	strlcpy(str2, str1, 12);
	printf("%d\n", ft_strncmp(str1, str2, 12));
	strcpy(str2, "");
	printf("%d\n", ft_strncmp(str1, str2, 12));
	strcpy(str1, "");
	printf("%d\n", ft_strncmp(str1, str2, 12));
	return (0);
}
