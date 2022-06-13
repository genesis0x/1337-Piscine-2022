#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char	*str1;
	char	str2[62];

	str1 = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	strcpy(str2, str1);
	printf("%s", ft_strcapitalize(str2));
	return (0);
}
