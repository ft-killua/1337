/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:21:17 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/07 15:29:22 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		index;
	char	*src_copy;	

	len = 0;
	index = -1;
	while (src[len])
		len++;
	src_copy = malloc(sizeof(char) * (len + 1));
	if (!src_copy)
		return (0);
	while (src[++index])
		src_copy[index] = src[index];
	src_copy[index] = 0;
	return (src_copy);
}
