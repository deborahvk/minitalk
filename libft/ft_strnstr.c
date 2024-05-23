/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:24:03 by dkott             #+#    #+#             */
/*   Updated: 2023/05/10 15:38:49 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)big);
	if (big == NULL && len == 0)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (i + j < len && big[i + j] == little[j] && little[j] != 0)
				j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *s1 = "oh no not thr empty string !";
	char *s2 = "";
	size_t max = 0;

	printf("%s\n", ft_strnstr(s1, s2, max));
	printf("%s", strnstr(s1, s2, max));
	return (0);
}*/
