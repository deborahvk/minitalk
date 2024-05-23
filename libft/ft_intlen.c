/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <dkott@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:38:02 by dkott             #+#    #+#             */
/*   Updated: 2024/05/23 15:26:28 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_intlen(long int n, size_t *to_compare)
{
	unsigned int	ln;

	ln = n;
	if (n < 0)
	{
		*to_compare += 1;
		ln = -n;
	}
	if (ln > 9)
	{
		*to_compare += 1;
		ft_intlen(ln / 10, to_compare);
	}
	else
		*to_compare += 1;
}
