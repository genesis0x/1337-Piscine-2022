/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:46:03 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/24 15:59:01 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	white_spaces(char c)
{
	if (c == ' ' || c == '\t' || c == '\r'
		|| c == '\f' || c == '\v' || c == '\n')
		return (1);
	return (0);
}

int	ft_convert(char *str, int index)
{
	int	total;

	total = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		total = total * 10 + str[index] - 48;
		index++;
	}
	return (total);
}

int	ft_atoi(char *str)
{
	int	index;
	int	minus;
	int	total;
	int	min;

	index = 0;
	minus = 1;
	total = 0;
	min = 0;
	while (white_spaces(str[index]))
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			min++;
		index++;
	}
	if (min % 2)
		minus = -1;
	total = ft_convert(str, index);
	return (total * minus);
}
