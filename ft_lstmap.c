/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 10:02:28 by alexandr          #+#    #+#             */
/*   Updated: 2020/11/12 18:34:17 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_elem;
	t_list *new_list;

	if (!lst || !f || !del)
		return (0);
	new_elem = ft_lstnew(f(lst->content));
	if (!new_elem)
		return (0);
	new_list = new_elem;
	lst = lst->next;
	while (lst)
	{
		new_elem->next = ft_lstnew(f(lst->content));
		if (!new_elem->next)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		new_elem = new_elem->next;
		lst = lst->next;
	}
	return (new_list);
}
