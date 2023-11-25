/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:39:02 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/25 11:46:15 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_unsigned_putnbr(unsigned int nbr, int *count)
{
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + 48, count);
	else
	{
		ft_unsigned_putnbr(nbr / 10, count);
		ft_unsigned_putnbr(nbr % 10, count);
	}
}