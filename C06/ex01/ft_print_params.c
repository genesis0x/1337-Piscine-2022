/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:49:24 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/24 22:49:43 by hahadiou         ###   ########.fr       */
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

	index = 1;
	while (index < ac)
	{
		ft_putstr(av[index]);
		write(1, "\n", 1);
		index++;
	}
	return (0);
}
