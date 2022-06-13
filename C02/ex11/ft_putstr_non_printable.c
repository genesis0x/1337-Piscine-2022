/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:38:18 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/19 11:26:21 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(int num)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[num / 16]);
	ft_putchar(hexa[num % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 32 && str[index] <= 126)
			ft_putchar(str[index]);
		else
		{
			ft_putchar('\\');
			hex(str[index]);
		}
		index++;
	}
}
