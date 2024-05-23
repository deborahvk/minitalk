/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:28:23 by dkott             #+#    #+#             */
/*   Updated: 2023/05/09 13:53:23 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < (n - 1) && (str1[i] == str2[i]))
		i++;
	if (n == 0)
		return (0);
	return (str1[i] - str2[i]);
}
/*
int mymemcmp( const void * pointer1, const void * pointer2, size_t size ) 
{
	unsigned long position;
    for( position=0; position<size; ++position ) {
        int delta = *(unsigned char *)pointer1++ - *(unsigned char *)pointer2++;
        if ( delta ) return delta;
    }
    return 0;
}

int	main (void)
{
	char s1[11] = "abcdefghij";
	char s2[11] = "abcdefgxyz";

	printf("%d", mymemcmp(s1, s2, 8));
    printf("\n%d", memcmp(s1, s2, 8));
    printf("\n%d", mymemcmp(s1, s2, 2));
    printf("\n%d", memcmp(s1, s2, 2));
    printf("\n%d", mymemcmp(s1, s2, 0));
    printf("\n%d", memcmp(s1, s2, 0));
	printf("\n%d", ft_memcmp(s1, s2, 7));
	printf("\n%d", memcmp(s1, s2, 7));
	printf("\n%d", ft_memcmp(s1, s2, 2));
	printf("\n%d", memcmp(s1, s2, 2));
	printf("\n%d", ft_memcmp(s1, s2, 0));
	printf("\n%d", memcmp(s1, s2, 0));
	printf("\n%d", ft_memcmp(s1, s2, 8));
    printf("\n%d", mymemcmp(s1, s2, 8));
    printf("\n%d", ft_memcmp(s1, s2, 2));
    printf("\n%d", mymemcmp(s1, s2, 2));
    printf("\n%d", ft_memcmp(s1, s2, 0));
    printf("\n%d", mymemcmp(s1, s2, 0));


	return (0);
}*/
