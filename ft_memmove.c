/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:05:17 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/11 16:41:31 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*buf_dest;
	const unsigned char	*buf_src;

	buf_dest = (unsigned char*)dest;
	buf_src = (const unsigned char*)src;
	if (dest == src)
		return (dest);
	if (buf_src < buf_dest)
	{
		while (n--)
			*(buf_dest + n) = *(buf_src + n);
		return (dest);
	}
	while (n--)
		*buf_dest++ = *buf_src++;
	return (dest);
}
