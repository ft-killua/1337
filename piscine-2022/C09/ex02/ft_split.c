/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hidhmmou <hidhmmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:04:29 by hidhmmou          #+#    #+#             */
/*   Updated: 2022/08/11 12:02:36 by hidhmmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	nbr_w;

	nbr_w = 0;
		i = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		if (str[i])
			nbr_w++;
		while (str[i] && !is_separator(str[i], charset))
			i++;
	}
	return (nbr_w);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_separator(str[i], charset))
		i++;
	return (i);
}

char	*ft_word_grep(char *str, char *charset)
{
	int		len_w;
	int		i;
	char	*word;

	i = 0;
	len_w = ft_word_len(str, charset);
	word = malloc(sizeof(char) * (len_w + 1));
	while (i < len_w)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**splited;
	int		word_nbr;

	i = 0;
	word_nbr = ft_count_words(str, charset) + 1;
	splited = malloc(sizeof(char *) * word_nbr);
	while (*str)
	{
		while (*str && is_separator(*str, charset))
			str++;
		if (*str)
		{
			splited[i] = ft_word_grep(str, charset);
			i++;
		}
		while (*str && !is_separator(*str, charset))
			str++;
	}
	splited[i] = 0;
	return (splited);
}
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	int		i;
	char	**split;

	i = 0;
	(void) argc;
	split = ft_split(argv[1], argv[2]);
	while (split[i])
		printf("%s\n", split[i++]);
}
*/