/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassimi <hassimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:58:06 by hassimi           #+#    #+#             */
/*   Updated: 2022/05/16 21:35:19 by hassimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	writeforme(int W, char F, char M, char L);

void	rush(int x, int y)
{
	int	a;

	a = 1;
	while (a <= y && x > 0)
	{
		if (a == 1)
			writeforme(x, 'o', '-', 'o');
		else if (a == y)
			writeforme(x, 'o', '-', 'o');
		else
			writeforme(x, '|', ' ', '|');
			a++;
	}
}

void	writeforme(int W, char F, char M, char L)

{
	int	b;

	b = 0;
	ft_putchar(F);
	while (b < W - 2)
	{
		ft_putchar(M);
		b++;
	}
	if (W > 1)
	{
		ft_putchar(L);
	}
	ft_putchar('\n');
}
