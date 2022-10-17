/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:21:25 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/09 21:47:18 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	check(char t, char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (t == str[i++])
			return (1);
	return (0);
}

int	get_digit_index(char t, char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	while (str[i])
		if (t == str[i++])
			return (i - 1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	len;
	int	sign;

	if (!base_is_valid(base))
		return (0);
	i = 0;
	res = 0;
	len = 0;
	sign = 1;
	len = ft_base_len(base);
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
			i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && check(str[i], base))
	{
		res *= len;
		res += get_digit_index(str[i++], base);
	}
	return (res * sign);
}
/*
int	main(int argc, char **argv)
{
	argc = 0;
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
}
*/