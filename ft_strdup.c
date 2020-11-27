/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:29:39 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/11 17:10:24 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	len_src;

	len_src = ft_strlen(src) + 1;
	copy = malloc(len_src);
	if (copy)
		copy = ft_memcpy(copy, src, len_src);
	return (copy);
}
