/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:10:23 by dkott             #+#    #+#             */
/*   Updated: 2023/05/12 14:11:20 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*supprime et libere la memoire de l'element passe en parametre, et de tous les 
  elements qui suivent, a l'aide de 'del' et de free. Enfin le pointeur initial 
  doit etre mis a NULL.
  lst = adresse du pointeur vers un element.
  del = l'adresse de la fonction permettant de supprimer le contenu d'un element.
  return = aucun.
   */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		last = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = last;
	}
}
