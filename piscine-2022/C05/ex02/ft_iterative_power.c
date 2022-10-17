/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:58:58 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/04 09:37:27 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	while (power > 1)
	{
		nb *= n;
		power--;
	}
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb);
}
