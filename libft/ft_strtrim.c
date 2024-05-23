/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:27:50 by dkott             #+#    #+#             */
/*   Updated: 2023/05/05 13:46:33 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/* Alloue avec malloc et retourne une copie de la chaine
   s1 sans les caracteres specifies dans set au debut et a la fin
   de la chaine
   s1 = chaine de caract trimmee
   set = set de ref de caracteres a trimmer

   retour = chaine trimmee ou NULL si alloc echoue*/

/*  

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char    *ft_strchr(const char *s, int c)
{
    const char  *str;
    int         i;

   	i = 0;
    str = s;
    while (str[i] != c)
    {
        if (str[i] == 0)
            return (NULL);
        i++;
    }
    return ((char *)str + i);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char            *newstrg;
    unsigned int    i;
    unsigned int    j;

    i = start;
    j = 0;
    newstrg = (char *)malloc(sizeof(char) * (len + 1));
    if (newstrg == 0)
        return (NULL);
    while (i < start + len)
    {
        newstrg[j] = s[i];
        j++;
        i++;
    }
    newstrg[j] = 0;
    return (newstrg);
}*/

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
			s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
int	main(void)
{
//	printf("%s", ft_strchr("ABAAbcdefAA", 'B'));
	printf("\n%s", ft_strtrim("ABAAbcdefAA", "AB"));
	return (0);
}*/
