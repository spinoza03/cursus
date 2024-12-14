/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:25:14 by ilallali          #+#    #+#             */
/*   Updated: 2024/12/13 18:19:03 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_conversion(va_list args, char specifier);
int	ft_puthex(unsigned long nb, char format);
int	ft_putptr(unsigned long ptr);
int	ft_putnbr(int nbr);
int	ft_putunsigned(unsigned int nb);

#endif