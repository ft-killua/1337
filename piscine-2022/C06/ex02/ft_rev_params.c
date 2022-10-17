/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:39:01 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/02 17:03:52 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac - 1;
	j = 0;
	while (i >= 1)
	{
		while (av[i][j])
			write(1, &av[i][j++], 1);
		write(1, "\n", 1);
		j = 0;
		i--;
	}
	return (0);
}
