/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:22:18 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/31 11:57:47 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;

	index = 0;
	if (max <= min)
		return (0);
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	while (min < max)
		(*range)[index++] = min++;
	return (index);
}
