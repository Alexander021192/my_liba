/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:46:38 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/11 16:49:45 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	char	*p_big;

	i = 0;
	p_big = (char *)big;
	little_len = ft_strlen(little);
	if (little_len == 0 || big == little)
		return (p_big);
	while (p_big[i] && i < n)
	{
		j = 0;
		while (p_big[i + j] && little[j]
		&& p_big[i + j] == little[j] && i + j < n)
			j++;
		if (j == little_len)
			return (p_big + i);
		i++;
	}
	return (0);
}
