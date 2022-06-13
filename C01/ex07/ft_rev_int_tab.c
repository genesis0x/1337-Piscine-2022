/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 11:58:13 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/14 13:17:43 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	sindex;

	index = 0;
	sindex = size - 1;
	while (index < (size / 2))
	{
		ft_swap (&tab[index], &tab[sindex]);
		index++;
		sindex--;
	}
}
