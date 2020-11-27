/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:57:18 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/20 12:10:15 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const char	*buf_src;
	size_t		i;

	buf_src = (const char *)src;
	i = 0;
	while (i < n)
	{
		if (buf_src[i] == (char)c)
			return ((void*)(src + i));
		i++;
	}
	return (0);
}
