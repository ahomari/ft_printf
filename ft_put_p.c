/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:56:46 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/30 15:46:33 by ahomari          ###   ########.fr       */
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
	unsigned long int	ptr;

	ptr = (unsigned long int)p;
	ft_putchar('0', count);
	ft_putchar('x', count);
	ft_hexa_p(ptr, count);
}
