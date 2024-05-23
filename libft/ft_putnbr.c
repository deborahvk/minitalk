/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <dkott@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:54:28 by dkott             #+#    #+#             */
/*   Updated: 2024/05/23 15:06:06 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	long	nb;
	int		ret;

	nb = n;
	ret = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nb > 9)
		ret += ft_putnbr(nb / 10);
	ret += ft_putchar(nb % 10 + '0');
	return (ret);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		ret;

	nb = n;
	ret = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nb < 0)
	{
		nb *= -1;
		ret += write (1, "-", 1);
	}
	if (nb > 9)
		ret += ft_putnbr(nb / 10);
	ret += ft_putchar(nb % 10 + '0');
	return (ret);
}
