/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <dkott@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:32:10 by dkott             #+#    #+#             */
/*   Updated: 2024/05/23 15:07:09 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(unsigned long long ptr)
{
	int	ret;

	ret = 0;
	if (!ptr)
	{
		ret += write(1, "(nil)", 5);
		return (ret);
	}
	ret += write(1, "0x", 2);
	ret += ft_printhexa(ptr, "0123456789abcdef");
	return (ret);
}

int	ft_printhexa(unsigned long n, char *base)
{
	int	ret;

	ret = 0;
	if (n < ft_strlen(base))
		ret += ft_putchar(base[n]);
	if (n >= ft_strlen(base))
	{
		ret += ft_printhexa(n / ft_strlen(base), base);
		ret += ft_printhexa(n % ft_strlen(base), base);
	}
	return (ret);
}
