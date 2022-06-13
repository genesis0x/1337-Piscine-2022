/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:38:24 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/18 17:18:24 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	uper;

	index = 0;
	uper = 1;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z')
			|| (str[index] >= 'A' && str[index] <= 'Z')
			|| (str[index] >= '0' && str[index] <= '9'))
		{
			if (uper == 1 && str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] -= 32;
			}
			else if (uper == 0 && (str[index] >= 'A' && str[index] <= 'Z'))
				str[index] += 32;
			uper = 0;
		}
		else
			uper = 1;
		index++;
	}
	return (str);
}
