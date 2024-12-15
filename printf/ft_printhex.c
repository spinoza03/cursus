/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:24:49 by ilallali          #+#    #+#             */
/*   Updated: 2024/12/15 23:02:51 by ilallali         ###   ########.fr       */
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
	{
		count += 1;
		ft_putchar(lhex[nb % 16]);
	}
	else
	{
		count += 1;
		ft_putchar(uhex[nb % 16]);
	}
	return (count);
}
