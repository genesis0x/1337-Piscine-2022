#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	*src;
	char	dst[12];

	src = "Hello";
	strcpy(dst, "Bye People!");
	ft_strcpy(dst, src);
	printf("%s%s", src, dst);
	return (0);
}
