/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:26:15 by dkott             #+#    #+#             */
/*   Updated: 2023/05/09 11:11:40 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstrg;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	newstrg = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (newstrg == 0)
		return (NULL);
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{	
		while (s1[i] != 0)
		{
			newstrg[i] = s1[i];
			i++;
		}
		while (s2[j] != 0)
		{
			newstrg[i] = s2[j];
			i++;
			j++;
		}
	}
	newstrg[i] = 0;
	return (newstrg);
}
/*
int	main(void)
{
	printf("%d", get_length(" toi"));
	printf("%s", ft_strjoin("salut", ""));
	return(0);
}*/
