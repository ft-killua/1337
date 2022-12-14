/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:01:24 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/07/21 10:51:07 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= (48 + 7))
	{
		b = a + 1;
		while (b <= (48 + 8))
		{
			c = b + 1;
			while (c <= (48 + 9))
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a != 48 + 7)
					write(1, ", ", 2);
			c++;
			}
		b++;
		}
	a++;
	}
}
