/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:41:10 by hahadiou          #+#    #+#             */
/*   Updated: 2022/05/21 17:58:28 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ssize;
	unsigned int	index;
	unsigned int	dsize;
	unsigned int	res;

	index = 0;
	dsize = 0;
	ssize = 0;
	while (src[ssize])
		ssize++;
	while (dest[dsize])
		dsize++;
	if (dsize > size)
		res = ssize + size;
	else
		res = dsize + ssize;
	if (size == 0)
		return (res);
	while (src[index] && dsize + index < (size - 1))
	{
		dest[dsize + index] = src[index];
		index++;
	}
	dest[dsize + index] = '\0';
	return (res);
}
