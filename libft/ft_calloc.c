/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:48:27 by dkott             #+#    #+#             */
/*   Updated: 2023/05/10 12:06:41 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*elemt;
	int		over;

	over = (int)(size * nmemb);
	if (size)
	{
		if (nmemb != ((size_t)over / size))
			return (NULL);
	}
	elemt = (void *)malloc(nmemb * size);
	if (elemt == 0)
		return (NULL);
	ft_bzero(elemt, nmemb * size);
	return (elemt);
}
/*
int	main (void)
{
//	char	*copy;

	printf("%p", ft_calloc(65, 3));
	printf("\n%p", calloc(65, 3));
	ft_calloc(5,1);
	printf("\n%s", copy);
	calloc(5, 1);
	printf("\n%s", copy);

	return (0);
}*/
