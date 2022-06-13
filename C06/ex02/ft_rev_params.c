/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:08:12 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/24 22:51:15 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	*ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int	index;

	index = ac - 1;
	while (index > 0)
	{
		ft_putstr(av[index]);
		write(1, "\n", 1);
		index--;
	}
	return (0);
}
