/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:59:06 by dkott             #+#    #+#             */
/*   Updated: 2023/05/15 08:39:41 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* alloue avec malloc et renvoie un nouvel element.
   la variable membre content est initialisee a l'aide
   de la valeur du parametre 'content'. next est initialise
   a NULL.
   return = le nouvel element
   */

t_list	*ft_lstnew(void *content)
{
	t_list	*elemt;

	elemt = (t_list *)malloc(sizeof(*elemt) * 1);
	if (!elemt)
		return (NULL);
	elemt->content = content;
	elemt->next = NULL;
	return (elemt);
}
