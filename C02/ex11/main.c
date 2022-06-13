#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	int		i;
	char	*str[2];
	char	c;

	i = 0;
	str[0] = "Coucou\ntu vas bien ?";
	str[1] = malloc(sizeof(char) * ('\x7F' - '\x00' + 2));
	c = '\x00';
	while (c <= '~')
	{
		strcat(str[1], &c);
		++c;
	}
	strcat(str[1], &c);
	while (i < 2)
		ft_putstr_non_printable(str[i++]);
	return (0);
}
