/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:02:57 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/07/30 11:16:51 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_d;
	unsigned int	len_s;

	i = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (len_d >= size || size == 0)
		return (size + len_s);
	while (src[i] && i < size - len_d - 1)
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
