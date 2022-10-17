/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:32:18 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/07 23:59:59 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	*range = NULL;
	if (min >= max)
		return (0);
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!*range)
		return (-1);
	while (i < len)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (len);
}
