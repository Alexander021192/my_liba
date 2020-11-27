/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:50:59 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/12 18:59:35 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_free_substr(char **arr_str, int i)
{
	while (i--)
		free(arr_str[i - 1]);
	return (0);
}

static void		ft_getsplit(char **arr_str, char const *str, char sep)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (str[j])
	{
		k = 0;
		while (str[j] == sep)
			j++;
		while (str[j] != sep && str[j] != 0)
			arr_str[i][k++] = str[j++];
		if (str[j] == 0 && str[j - 1] == sep)
			break ;
		else
			arr_str[i++][k] = '\0';
	}
}

static int		ft_mal(char **arr_str, char const *str, char sep)
{
	int i;
	int j;
	int len_word;

	i = 0;
	j = 0;
	while (str[j])
	{
		len_word = 0;
		while (str[j] == sep)
			j++;
		while (str[j] != sep && str[j] != 0)
		{
			len_word++;
			j++;
		}
		if (str[j] == 0 && str[j - 1] == sep)
			break ;
		else
			arr_str[i++] = malloc(len_word + 1);
		if (!arr_str[i - 1])
			return (ft_free_substr(arr_str, i - 1));
	}
	arr_str[i] = 0;
	return (1);
}

static int		count_word(char const *str, char sep)
{
	int i;
	int num_word;

	i = 0;
	num_word = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] != 0)
			num_word++;
		while (str[i] != sep && str[i] != 0)
			i++;
	}
	return (num_word);
}

char			**ft_split(char const *str, char sep)
{
	char **arr_str;

	if (!str)
		return (0);
	arr_str = malloc(sizeof(char *) * (count_word(str, sep) + 1));
	if (arr_str)
	{
		if (ft_mal(arr_str, str, sep))
			ft_getsplit(arr_str, str, sep);
		else
		{
			free(arr_str);
			return (0);
		}
	}
	return (arr_str);
}
