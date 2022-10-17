/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:56:11 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/07 21:07:31 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_lenth(char *sep, char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		len += j;
		i++;
	}
	j = 0;
	i = 0;
	while (sep[i])
		i++;
	j = i * (size - 1);
	return (len + j);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		lenth;
	char	*joined;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	lenth = ft_lenth(sep, strs, size);
	joined = malloc(lenth);
	*joined = 0;
	while (i < size)
	{
		ft_strcat(joined, strs[i]);
		if (i != size - 1)
			ft_strcat(joined, sep);
		i++;
	}
	return (joined);
}
/*
int	main(int ac, char **av)
{
	char	*result;
	result = ft_strjoin(ac, av, " | ");
	printf("%s\n", result);
	free(result);
	return (0);
}
*/