/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:53:29 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/31 12:54:08 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strrev(char *str);
int		ft_is_in_base(char c, char *base);
int		ft_get_int_from_base(char c, char *base);
int		skip_whitespace_minus(char *str, int *ptr_i);

int		ft_check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == '\f' ||
				base[i] == '\t' || base[i] == ' ' || base[i] == '\n' ||
				base[i] == '\r' || base[i] == '\v' || base[i] < 32 ||
				base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_malloc(char **nbr_c, int *sign, long *nbr_l, int *nbr)
{
	if (!(*nbr_c = (char *)malloc(sizeof(char) * 40)))
		return (0);
	*sign = 1;
	if (*nbr == 0)
		(*nbr_c)[0] = '0';
	if (*nbr < 0)
	{
		*nbr_l = *nbr;
		*nbr_l *= -1;
		*sign = -1;
	}
	else
		*nbr_l = *nbr;
	return (1);
}

char	*ft_getnbr_base(int nbr, char *base)
{
	long	nbr_l;
	char	*nbr_c;
	int		base_divider;
	int		i;
	int		sign;

	if (!(ft_malloc(&nbr_c, &sign, &nbr_l, &nbr)))
		return (0);
	base_divider = ft_strlen(base);
	if (nbr_c[0] == '0')
		i = 1;
	else
		i = 0;
	while (nbr_l > 0)
	{
		nbr_c[i++] = base[nbr_l % base_divider];
		nbr_l /= base_divider;
	}
	if (sign == -1)
		nbr_c[i++] = '-';
	nbr_c[i] = '\0';
	return (ft_strrev(nbr_c));
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		result;
	int		base_divider;

	i = 0;
	while (base[i])
		i++;
	base_divider = i;
	result = 0;
	sign = 1;
	if (skip_whitespace_minus(str, &i) % 2)
		sign = -1;
	while (str[i] && ft_is_in_base(str[i], base))
	{
		result *= base_divider;
		result += ft_get_int_from_base(str[i], base);
		i++;
	}
	result *= sign;
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	return (ft_getnbr_base(ft_atoi_base(nbr, base_from), base_to));
}