/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnmbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:28:42 by ilallali          #+#    #+#             */
/*   Updated: 2024/12/06 12:28:44 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	long	nb;
	int		count;

	count = 0;
	nb = nbr;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		count += ft_putnbr(nb / 10);
		count += ft_putchar((nb % 10) + '0');
	}
	else
	{
		count += ft_putchar(nb + '0');
	}
	return (count);
}
