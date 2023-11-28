/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:10:23 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/25 12:56:23 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int nbr, int *count);
void	ft_unsigned_putnbr(unsigned int nbr, int *count);
void	ft_hexa_putnbr(unsigned int nbr, const char format, int *count);
void    ft_put_p(void *p, int *count);





# endif