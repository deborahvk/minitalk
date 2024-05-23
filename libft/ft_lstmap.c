/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:29:03 by dkott             #+#    #+#             */
/*   Updated: 2023/05/15 09:07:54 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elmt;

	if (!f || !del)
		return (NULL);
	new = 0;
	while (lst)
	{
		elmt = ft_lstnew((*f)(lst->content));
		if (!elmt)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, elmt);
		lst = lst->next;
	}
	return (new);
}
