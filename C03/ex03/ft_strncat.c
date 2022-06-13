/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:51:14 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/21 18:57:00 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	con;

	index = 0;
	con = 0;
	while (dest[con] != '\0')
		con++;
	while (src[index] && index < nb)
	{
		dest[con] = src[index];
		con++;
		index++;
	}
	dest[con] = '\0';
	return (dest);
}
