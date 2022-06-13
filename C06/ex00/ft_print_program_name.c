/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:49:10 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/25 23:41:18 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int	index;

	index = 0;
	if (ac >= 1)
	{
		while (av[0][index] != '\0')
		{
			write(1, &av[0][index], 1);
			index++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
