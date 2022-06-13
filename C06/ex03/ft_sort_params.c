/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:22:09 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/24 22:50:52 by hahadiou         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	index;

	index = 0;
	while (s1[index] && s2[index] && (s1[index] == s2[index]))
		index++;
	return (s1[index] - s2[index]);
}

int	main(int ac, char **av)
{
	int		index;
	int		jindex;
	char	*swap;

	index = 1;
	while (index < ac)
	{
		jindex = index + 1;
		while (jindex < ac)
		{
			if (ft_strcmp(av[index], av[jindex]) > 0)
			{
				swap = av[index];
				av[index] = av[jindex];
				av[jindex] = swap;
			}
			jindex++;
		}
		ft_putstr(av[index]);
		write(1, "\n", 1);
		index++;
	}
	return (0);
}
