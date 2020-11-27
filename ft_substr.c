/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:12:37 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/11 16:50:52 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!str)
		return (0);
	if ((size_t)start > ft_strlen(str))
		return (ft_strdup(""));
	substr = malloc(len + 1);
	i = 0;
	if (substr)
	{
		while (i < len)
			substr[i++] = str[start++];
		substr[i] = 0;
	}
	return (substr);
}
