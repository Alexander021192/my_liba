/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 08:54:18 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/11 17:11:17 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t src_len;
	size_t dest_len;

	j = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = dest_len;
	if (!n)
		return (src_len);
	if (n < dest_len)
		return (src_len + n);
	while (src[j] && (dest_len + j) < n - 1)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (src_len + dest_len);
}
