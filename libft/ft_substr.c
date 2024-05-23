/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:01:54 by dkott             #+#    #+#             */
/*   Updated: 2023/05/12 15:39:38 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			new_str[j] = s[i];
			j++;
		}
		i++;
	}
	new_str[j] = 0;
	return (new_str);
}
/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstrg;
	size_t	i;

	i = 0;
	newstrg = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstrg)
		return (NULL);
	while (i < len)
	{	
		newstrg[i] = s[i];
		i++;
		start++;
	}
	newstrg[i] = 0;
	return (newstrg);
}*/
/*
int	main(void)
{
	char *str = "01234";
	size_t size = 10;
	
	printf("%s\n", ft_substr(str, 10, size));
	return (0);
}*/
