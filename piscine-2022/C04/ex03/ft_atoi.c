/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:20:55 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/01 16:16:03 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_space(char c)
{
	if (c == ' '
		|| c == '\t'
		|| c == '\v'
		|| c == '\n'
		|| c == '\f'
		|| c == '\r')
		return (1);
	return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_sign(char c)
{
	if (c == '-')
		return (-1);
	if (c == '+')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (is_space(str[i]))
		i++;
	while (is_sign(str[i]))
	{
		sign *= is_sign(str[i]);
		i++;
	}
	while (is_digit(str[i]))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
