/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:07:47 by dkott             #+#    #+#             */
/*   Updated: 2023/05/10 11:30:18 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Alloue avec malloc et retourne un tableau de chaines de caracteres
   obtenu en separant s a l'aide du caractere c. le tableau est null terminate.
   s = chaine de caracteres a decouper
   c = caractere delimiteur

   retour = tableau de chaines ou NULL si echec alloc.
  */
static int	count_words(const char *s, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (i);
}

static char	*word_cpy(const char *s, int start, int end)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = malloc(sizeof(char) * (end - start + 1));
	if (!s || !cpy)
		return (NULL);
	while (start < end)
	{
		cpy[i++] = s[start++];
	}
	cpy[i] = 0;
	return (cpy);
}

char	**ft_split(char	const *s, char c)
{
	char	**newstrg;
	size_t	i;
	size_t	j;
	int		index;

	newstrg = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !newstrg)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			newstrg[j++] = word_cpy(s, index, i);
			index = -1;
		}
		i++;
	}
	newstrg[j] = 0;
	return (newstrg);
}
