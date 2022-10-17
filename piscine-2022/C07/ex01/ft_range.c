/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:52:29 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/07 15:31:38 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	len;

	len = max - min;
	i = 0;
	if (len <= 0)
		return (0);
	range = (int *)malloc(sizeof(int) * len);
	if (!range)
		return (0);
	while (min < max)
		range[i++] = min++;
	return (range);
}
