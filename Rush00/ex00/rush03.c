/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassimi <hassimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:58:06 by hassimi           #+#    #+#             */
/*   Updated: 2022/05/17 10:22:43 by hassimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	writeforme(int W, char F, char M, char L);

void	rush(int x, int y)
{
	int	b;

	b = 1;
	while (b <= y && x > 0)
	{
		if (b == 1)
			writeforme(x, 'A', 'B', 'C');
		else if (b == y)
			writeforme(x, 'A', 'B', 'C');
		else
			writeforme(x, 'B', ' ', 'B');
			b++;
	}
}

void	writeforme(int W, char F, char M, char L)

{
	int	a;

	a = 0;
	ft_putchar(F);
	while (a < W - 2)
	{
		ft_putchar(M);
		a++;
	}
	if (W > 1)
	{
		ft_putchar(L);
	}
	ft_putchar('\n');
}
