/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:38:12 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/16 12:06:24 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*buf_dest;
	const char	*buf_src;

	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	buf_dest = (char *)dest;
	buf_src = (const char *)src;
	while (n--)
		buf_dest[n] = buf_src[n];
	return (dest);
}
