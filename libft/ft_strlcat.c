/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:50:44 by dkott             #+#    #+#             */
/*   Updated: 2023/05/15 15:21:46 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;

	i = 0;
	len_dst = ft_strlen(dst);
	if (size == 0 && !dst)
		return (ft_strlen(src));
	if (size < len_dst)
		return (ft_strlen(src) + size);
	if (size == len_dst)
		return (ft_strlen(src) + len_dst);
	if (size > len_dst)
	{
		while (src[i] && i < (size - len_dst - 1))
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
		return (len_dst + ft_strlen(src));
	}
	else
		return (ft_strlen(src) + size);
}
