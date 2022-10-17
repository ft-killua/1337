/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:44:05 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/11 18:06:55 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_sorted;

	i = 0;
	is_sorted = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			is_sorted = 0;
		i++;
	}
	i = 0;
	if (is_sorted == 0)
	{
		is_sorted = 1;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) < 0)
				is_sorted = 0;
			i++;
		}
	}
	return (is_sorted);
}
