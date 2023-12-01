/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:03:40 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/28 15:10:29 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_long(long nbr, int *count)
{
	if (nbr < 0)
	{
		ft_putchar('-', count);
		ft_putnbr_long(nbr * -1, count);
	}
	else if (nbr <= 9)
	{
		ft_putchar(nbr + 48, count);
	}
	else
	{
		ft_putnbr_long(nbr / 10, count);
		ft_putnbr_long(nbr % 10, count);
	}
}

void	ft_putnbr(int nbr, int *count)
{
	ft_putnbr_long((long)nbr, count);
}
