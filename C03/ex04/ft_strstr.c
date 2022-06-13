/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:04:43 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/21 17:42:14 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	sindex;
	int	cindex;

	index = 0;
	sindex = 0;
	if (to_find[index] == '\0')
		return (str);
	while (to_find[index] != '\0')
		index++;
	while (str[sindex] != '\0')
	{
		cindex = 0;
		while (str[sindex] != '\0' && str[sindex++] == to_find[cindex++])
		{
			if (to_find[cindex] == '\0')
				return (&str[sindex - cindex]);
		}
	}
	return (0);
}
