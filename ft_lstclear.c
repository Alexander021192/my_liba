/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandr <alexandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 21:58:25 by ocalamar          #+#    #+#             */
/*   Updated: 2020/11/27 14:03:37 by alexandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *elem;
	t_list *remove;

	if (!lst || !del || !*lst)
		return ;
	elem = *lst;
	while (elem)
	{
		remove = elem->next;
		ft_lstdelone(elem, del);
		elem = remove;
	}
	*lst = 0;
}
