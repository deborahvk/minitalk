/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:22:24 by dkott             #+#    #+#             */
/*   Updated: 2023/05/10 14:19:28 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

static int	abs_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	get_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
		len++;
	if (nbr == 0)
		len = 1;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = get_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (NULL);
	result[len] = 0;
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		len--;
		result[len] = abs_value(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
/*
int	main(void)
{
	int nbr = 0;

	printf("%s", ft_itoa(nbr));
	return (0);
}*/
