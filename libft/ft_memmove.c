/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:58:12 by dkott             #+#    #+#             */
/*   Updated: 2023/05/10 14:37:17 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s1;
	char		*s2;

	s1 = src;
	s2 = dest;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 <= s2)
	{
		s2 += n - 1;
		s1 += n - 1;
		while (n--)
			*s2-- = *s1--;
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int main(void)
{
    char    src[10] = "Bonjour";
    char    dest[10];

    printf("%p", ft_memmove(dest, src, sizeof(char) * 10));
    printf("\n%p", memmove(dest, src, sizeof(char) * 10));

	ft_memmove(dest, src, sizeof(char) * 10);
	printf("\n%s", dest);
	memmove(dest, src, sizeof(char) * 10);
    printf("\n%s", dest);

    return (0);
}*/
