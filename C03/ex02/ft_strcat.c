/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:32:53 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/21 17:41:26 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	con;

	index = 0;
	con = 0;
	while (dest[con] != '\0')
		con++;
	while (src[index] != '\0')
	{
		dest[con] = src[index];
		con++;
		index++;
	}
	dest[con] = '\0';
	return (dest);
}
