/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:40:10 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/25 13:01:53 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_format(va_list ap, int *count, const char format)
{
	if (format == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (format == 'c')
		ft_putchar((char)va_arg(ap, int), count);
	else if (format == 'x' || format == 'X')
		ft_hexa_putnbr(va_arg(ap, unsigned int), format, count);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (format == 'p')
		ft_put_p(va_arg(ap, void *), count);
	
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_format(ap, &count, format[i]);
		}
		i++;
	}
	return (count);
}
