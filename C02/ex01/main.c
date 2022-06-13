#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	src[13];
	char	dst[12];

	strcpy(src, "Hello World!");
	strcpy(dst, "Bye People!");
	ft_strncpy(dst, src, 3);
	printf("%s\n%s\n", src, dst);
	strcpy(src, "Hey");
	ft_strncpy(dst, src, 4);
	printf("%s\n%s\n", src, dst);
	return (0);
}
