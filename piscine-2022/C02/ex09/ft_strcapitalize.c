/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:24:00 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/07/27 10:51:14 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	strtolower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	strtolower(str);
	while (str[c])
	{
		if (c == 0 && is_alpha(str[0]))
		{
			str[c] -= 32;
		}
		else if (is_alpha(str[c]))
		{
			if (!(is_alpha(str[c - 1]) || is_numeric(str[c - 1])))
				str[c] -= 32;
		}
		c++;
	}
	return (str);
}
