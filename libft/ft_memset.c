/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 08:45:34 by dkott             #+#    #+#             */
/*   Updated: 2023/05/03 09:09:46 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char	buffer[10];

	printf("%p", ft_memset(buffer, 2, sizeof(char) * 10));
	printf("\n%p", memset(buffer, 2, sizeof(char) * 10));
	return (0);
}*/
