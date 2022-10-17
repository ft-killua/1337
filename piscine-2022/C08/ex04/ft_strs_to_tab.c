/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:05:19 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/09 16:17:15 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_dup(char *str)
{
	char	*dup;
	int		i;
	int		len;

	i = 0;
	len = ft_len(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (dup);
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}		
	dup[i] = 0;
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	tab = malloc((ac + 1) * sizeof(t_stock_str));
	i = 0;
	if (!tab)
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_len(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_dup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
