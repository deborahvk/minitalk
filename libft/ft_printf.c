/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkott <dkott@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:14:02 by dkott             #+#    #+#             */
/*   Updated: 2024/05/23 15:08:06 by dkott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_parsing(const char c, va_list args)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_putchar(va_arg(args, int));
	if (c == 's')
		ret += ft_putstr(va_arg(args, char *));
	if (c == 'p')
		ret += ft_putptr(va_arg(args, unsigned long));
	if (c == 'd' || c == 'i')
		ret += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		ret += ft_putnbr_unsigned(va_arg(args, unsigned int));
	if (c == '%')
		ret += ft_putchar('%');
	if (c == 'x')
		ret += ft_printhexa(va_arg(args, unsigned int), "0123456789abcdef");
	if (c == 'X')
		ret += ft_printhexa(va_arg(args, unsigned int), "0123456789ABCDEF");
	return (ret);
}

int	ft_printf(const char *form, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (!form)
		return (0);
	va_start(args, form);
	i = 0;
	len = 0;
	while (form[i])
	{
		if (form[i] == '%' && form[i + 1])
		{
			len += ft_parsing(form[i + 1], args);
			i++;
		}
		else
		{
			write(1, &form[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
