/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 21:41:18 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/01 16:21:18 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_is_valid(char *base)
{
	int	i;
	int	j;
	int	len_b;

	len_b = ft_base_len(base);
	i = 0;
	if (len_b < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while ((base[i] != base[j]) && base[j])
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		base_len;

	if (!base_is_valid (base))
		return ;
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	base_len = ft_base_len(base);
	if (n < base_len)
		ft_putchar(base[n]);
	else
	{
		ft_putnbr_base(n / base_len, base);
		ft_putnbr_base(n % base_len, base);
	}
}
