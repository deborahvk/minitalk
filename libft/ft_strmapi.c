/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:05:22 by dkott             #+#    #+#             */
/*   Updated: 2023/05/10 11:24:17 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applique la fonction 'f' a chaque caractere de la chaine 's'
   et passe son index comme premier argument pour creer une nouvelle 
   chaine de caracteres (avec malloc) resultant des applications 
   successives de 'f'.

   s = chaine de caracteres sur laquelle iterer
   f = la fonction a appliquer a chaque caractere.

   return = la chaine de caracteres resultant des app successives de 'f'
   			NULL si l'alloc echoue.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstrg;
	unsigned int	i;

	i = 0;
	newstrg = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (newstrg == 0)
		return (NULL);
	while (s[i])
	{
		newstrg[i] = f(i, s[i]);
		i++;
	}
	newstrg[i] = 0;
	return (newstrg);
}
