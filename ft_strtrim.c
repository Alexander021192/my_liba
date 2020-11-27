/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:10:34 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/11 16:50:31 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;

	if (!str)
		return (0);
	if (!set)
		return (ft_strdup(str));
	start = 0;
	end = ft_strlen(str);
	while (ft_strchr(set, str[start]) && str[start] != '\0')
		start++;
	if (str[start] == '\0')
		return (ft_strdup(""));
	while (ft_strrchr(set, str[end - 1]))
		end--;
	return (ft_substr(str, start, end - start));
}
