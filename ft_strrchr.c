/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:30:13 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/16 12:08:09 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	p = 0;
	while (src[i])
	{
		if (src[i] == (char)c)
			p = (char *)src + i;
		i++;
	}
	if (c == '\0')
		p = (char *)(src + i);
	return (p);
}
