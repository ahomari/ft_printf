/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:56:46 by ahomari           #+#    #+#             */
/*   Updated: 2023/12/02 20:45:57 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hexa_p(unsigned long nbr, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 0 && nbr <= 15)
		ft_putchar(base[nbr], count);
	else
	{
		ft_hexa_p(nbr / 16, count);
		ft_hexa_p(nbr % 16, count);
	}
}

void	ft_put_p(void *p, int *count)
{
	unsigned long	ptr;

	ptr = (unsigned long)p;
	ft_putstr("0x", count);
	ft_hexa_p(ptr, count);
}
