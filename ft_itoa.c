/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:53:52 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/12 19:00:48 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr >= 1)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_getstr(long nbr)
{
	char	*res;
	int		nbrlen;

	nbrlen = ft_nbrlen(nbr);
	if (nbr == 0)
		return (ft_strdup("0"));
	else
		res = malloc(nbrlen + 1);
	if (!res)
		return (0);
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	res[nbrlen--] = '\0';
	while (nbr)
	{
		res[nbrlen--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	long	nbr;

	nbr = n;
	return (ft_getstr(nbr));
}
