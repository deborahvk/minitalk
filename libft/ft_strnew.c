/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <dkott@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:39:02 by dkott             #+#    #+#             */
/*   Updated: 2024/05/23 15:26:41 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*strnew;

	strnew = (char *)malloc(size + 1 * sizeof(char));
	if (!strnew)
		return (NULL);
	ft_bzero(strnew, size + 1);
	return (strnew);
}
