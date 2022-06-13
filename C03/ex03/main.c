#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char	src[13];
	char	dst[24];

	strcpy(src, "Hello World!");
	strcpy(dst, "Bye People!");
	ft_strncat(dst, src, 6);
	printf("%s\n%s", src, dst);
	strncpy(src, dst, 4);
	ft_strncat(dst, src, 6);
	printf("%s\n%s", src, dst);
	return (0);
}
