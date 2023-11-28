/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:52:59 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/25 12:57:29 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_hexa_putnbr(unsigned int nbr, const char format, int *count)
{
	char *base;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	
	if (nbr >= 0 && nbr <= 15)
		ft_putchar(base[nbr], count);
	else
	{
		ft_hexa_putnbr(nbr / 16, format, count);
		ft_hexa_putnbr(nbr % 16, format, count);
	}
}