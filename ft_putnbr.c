/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:03:40 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/25 10:11:07 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int nbr, int *count)
{
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	if (nbr < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(nbr * -1, count);
	}
	else if (nbr <= 9)
		ft_putchar(nbr + 48, count);
	else
	{
		ft_putnbr(nbr / 10, count);
		ft_putnbr(nbr % 10, count);
	}
}