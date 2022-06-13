#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	int		dst_len;
	char	*src;
	char	dst[24];

	src = "Hello World!";
	strcpy(dst, "Bye People!");
	dst_len = ft_strlcat(dst, src, 24);
	printf("%s\n%s\n%d\n", src, dst, dst_len);
	strcpy(dst, "Bye People!");
	dst_len = ft_strlcat(dst, src, 17);
	printf("%s\n%s\n%d\n", src, dst, dst_len);
	return (0);
}
