#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	int		dst_len;
	char	*src;
	char	dst[13];

	src = "Hello World!";
	strcpy(dst, "Bye People!");
	dst_len = ft_strlcpy(dst, src, 13);
	printf("--> Original <--\n%s\n%s\n%d\n", src, dst, dst_len);
	strcpy(dst, "Bye People!");
	dst_len = ft_strlcpy(dst, src, 6);
	printf("--> Mine <-- \n%s\n%s\n%d\n", src, dst, dst_len);
	return (0);
}
