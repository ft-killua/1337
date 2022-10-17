/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:07:00 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/07/30 11:08:27 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strncmp(char *a, char *b, int lenth)
{
	int	i;

	i = 0;
	while (a[i] && b[i] && a[i] == b[i] && lenth)
	{
		lenth--;
		i++;
	}
	if (lenth == 0)
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	if (to_find[i] == '\0')
		return (str);
	while (to_find[l])
		l++;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_strncmp(str + i, to_find, l))
				return (str + i);
		}
		i++;
	}
	return (0);
}
