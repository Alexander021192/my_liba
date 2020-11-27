/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandr <alexandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:33:27 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/09 10:31:19 by alexandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *buf_s1;
	const unsigned char *buf_s2;
	size_t				i;

	i = 0;
	buf_s1 = (const unsigned char *)s1;
	buf_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (buf_s1[i] != buf_s2[i])
			return (buf_s1[i] - buf_s2[i]);
		i++;
	}
	return (0);
}
