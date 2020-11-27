/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 08:22:56 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/11 16:45:09 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	char ch_num;

	ch_num = (nbr % 10) + '0';
	if (nbr == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (nbr < 0)
		{
			write(fd, "-", 1);
			nbr = -nbr;
			ft_putnbr_fd(nbr, fd);
		}
		else if (nbr < 10)
			ft_putchar_fd(ch_num, fd);
		else
		{
			ft_putnbr_fd(nbr / 10, fd);
			ft_putchar_fd(ch_num, fd);
		}
	}
}
