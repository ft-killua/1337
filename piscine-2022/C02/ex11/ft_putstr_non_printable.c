/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:45:08 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/07/25 11:20:43 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hexa;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(hexa[str[i] / 16]);
			ft_putchar(hexa[str[i] % 16]);
		}
		i++;
	}
}
