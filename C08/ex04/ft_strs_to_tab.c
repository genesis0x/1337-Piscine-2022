/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:25:58 by hahadiou          #+#    #+#             */
/*   Updated: 2022/06/01 09:59:13 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*mal;
	int		i;

	len = ft_strlen(src);
	mal = (char *)malloc((len + 1) * sizeof(char));
	if (!mal)
		return (0);
	i = 0;
	while (src[i])
	{
		mal[i] = src[i];
		i++;
	}
	mal[i] = '\0';
	return (mal);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str			*str;
	int					i;
	int					length;

	i = 0;
	str = (t_stock_str *)malloc((ac + 1) * (sizeof(t_stock_str)));
	if (!str)
		return (0);
	while (i < ac)
	{
		length = ft_strlen(av[i]);
		str[i].size = length;
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i++;
	}
	str[i].str = 0;
	return (str);
}
