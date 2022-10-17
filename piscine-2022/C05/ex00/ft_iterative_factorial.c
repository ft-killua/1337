/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:11:01 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/03 20:54:47 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fct;

	fct = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fct *= nb;
		nb--;
	}
	return (fct);
}
