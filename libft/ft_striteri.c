/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:23:40 by dkott             #+#    #+#             */
/*   Updated: 2023/05/10 11:33:44 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	f(unsigned int i, char *c)
 {
 	if (i % 2 == 0)
 		*c = 'r';
 	if (i % 2 != 0)
 		*c = 'c';
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, s + i);
		i++;
	}
}
/*
int main()
{
 	char	s[] = "Bonjour je suis la";
 	ft_striteri(s, &f);
 	printf("%s\n", s);
 	return 0;
}*/
