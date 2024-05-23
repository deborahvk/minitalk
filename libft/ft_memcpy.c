/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:25:09 by dkott             #+#    #+#             */
/*   Updated: 2023/05/10 14:36:16 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)src;
	s2 = (char *)dest;
	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char    src[] = "";
	char	dest[] = "";
	
//	printf("%p", ft_memcpy(dest, src, sizeof(char) * 10));
//    printf("\n%p", memcpy(dest, src, sizeof(char) * 10));
	ft_memcpy(dest, src, sizeof(char) * 3);
	printf("\n%s", dest);
//	memcpy(dest, src, sizeof(char) * 3);
//	printf("\n%s", dest);
    return (0);
}*/
