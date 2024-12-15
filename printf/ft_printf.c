/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:35:05 by ilallali          #+#    #+#             */
/*   Updated: 2024/12/15 23:01:45 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_conversion(va_list args, char specifier)
{
	int	printed_chars;

	printed_chars = 0;
	if (specifier == 'c')
		printed_chars += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		printed_chars += ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		printed_chars += ft_putptr(va_arg(args, size_t));
	else if (specifier == 'd' || specifier == 'i')
		printed_chars += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		printed_chars += ft_putunsigned(va_arg(args, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		printed_chars += ft_puthex(va_arg(args, unsigned int), specifier);
	else if (specifier == '%')
		printed_chars += ft_putchar('%');
	else
		printed_chars += ft_putchar(specifier);
	return (printed_chars);
}

static int	handle_percent(const char *format, int *i, va_list args)
{
	int	len;

	len = 0;
	if (format[*i + 1] == '%')
	{
		len += ft_putchar('%');
		(*i)++;
	}
	else if (format[*i + 1])
	{
		len += ft_conversion(args, format[*i + 1]);
		(*i)++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (write(1, "", 0) < 0)
			return (-1);
		if (format[i] == '%')
			len += handle_percent(format, &i, args);
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
