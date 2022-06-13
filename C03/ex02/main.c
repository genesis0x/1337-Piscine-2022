#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char	src[13];
	char	dst[24];

	strcpy(src, "Hello World!");
	strcpy(dst, "Bye People!");
	ft_strcat(dst, src);
	printf("Before: %s\nAfter: %s", src, dst);
	return (0);
}
