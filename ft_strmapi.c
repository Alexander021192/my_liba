/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:52:18 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/11 16:45:18 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (!str)
		return (ft_strdup(""));
	else if (!f)
		return (ft_strdup(str));
	res = ft_strdup(str);
	if (res)
		while (str[i])
		{
			res[i] = (*f)(i, str[i]);
			i++;
		}
	return (res);
}
