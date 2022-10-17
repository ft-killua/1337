/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:30:19 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/07/23 14:53:49 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combinated_number(int a, int b)
{
	char	c;
	char	d;
	char	e;
	char	f;

	c = (a / 10) + 48;
	d = (a % 10) + 48;
	e = (b / 10) + 48;
	f = (b % 10) + 48;
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, " ", 1);
	write(1, &e, 1);
	write(1, &f, 1);
	if (a != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_combinated_number(a, b);
			b++;
		}
		a++;
	}
}
