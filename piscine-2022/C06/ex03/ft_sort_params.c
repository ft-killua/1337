/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:37:41 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/02 17:03:25 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_cmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}

void	ft_sort(int argc, char *argv[])
{
	int		i;
	char	*t;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_cmp(argv[i], argv[i + 1]) > 0)
		{
			t = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = t;
			i = 0;
		}
	i++;
	}
}

void	ft_print_arg(char *argv)
{
	while (*argv)
		write (1, argv++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort(argc, argv);
	while (i < argc)
	{
		ft_print_arg (argv[i++]);
	}
}
