/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:24:49 by ilallali          #+#    #+#             */
/*   Updated: 2024/12/06 19:16:37 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nb, char format)
{
	int		count;
	char	*lhex;
	char	*uhex;

	count = 0;
	lhex = "0123456789abcdef";
	uhex = "0123456789ABCDEF";
	if (nb > 15)
		count += ft_puthex(nb / 16, format);
	if (format == 'x')
		count += ft_putchar(lhex[nb % 16]);
	else
		count += ft_putchar(uhex[nb % 16]);
	return (count);
}
