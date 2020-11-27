/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:10:09 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/12 18:36:54 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int stop, size_t n)
{
	size_t				i;
	unsigned char		s;
	unsigned char		*buf_dest;
	const unsigned char	*buf_src;

	s = (unsigned char)stop;
	buf_dest = (unsigned char *)dest;
	buf_src = (const unsigned char*)src;
	i = 0;
	while (i < n)
	{
		buf_dest[i] = buf_src[i];
		if (buf_src[i] == s)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
