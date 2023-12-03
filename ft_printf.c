/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:40:10 by ahomari           #+#    #+#             */
/*   Updated: 2023/12/02 20:31:49 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_format(va_list ap, int *count, const char format)
{
	if (format == '%')
		ft_putchar(format, count);
	else if (format == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (format == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (format == 'd' || format == 'i')
		ft_putnbr_long(va_arg(ap, int), count);
	else if (format == 'u')
		ft_putnbr_long(va_arg(ap, unsigned int), count);
	else if (format == 'x' || format == 'X')
		ft_hexa_putnbr(va_arg(ap, unsigned int), format, count);
	else if (format == 'p')
		ft_put_p(va_arg(ap, void *), count);
	else
		ft_putchar(format, count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	i = 0;
	count = 0;
	if (write(1, "", 0))
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				break ;
			i++;
			ft_format(ap, &count, format[i]);
		}
		else
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(ap);
	return (count);
}
