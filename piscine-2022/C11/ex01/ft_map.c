/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:07:23 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/11 17:17:33 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*t;

	t = malloc(sizeof(int) * length);
	i = 0;
	if (!t)
		return (NULL);
	while (i < length)
	{
		t[i] = (*f)(tab[i]);
		i++;
	}
	return (t);
}
