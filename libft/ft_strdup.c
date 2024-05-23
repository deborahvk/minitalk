/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:53:37 by dkott             #+#    #+#             */
/*   Updated: 2023/05/10 10:15:44 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (s[i] != 0)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}
/*
int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";

	printf("%s", ft_strdup(str));
	printf("%s", strdup(str));
	return (0);
}*/
