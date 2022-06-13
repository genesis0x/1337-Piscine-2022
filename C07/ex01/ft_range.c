/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:25:59 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/30 11:41:25 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	index;
	int	*array;

	if (max <= min)
		return (0);
	index = 0;
	array = malloc(sizeof(int) * (max - min));
	while (min < max)
		array[index++] = min++;
	return (array);
}
