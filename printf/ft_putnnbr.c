/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:18:24 by ilallali          #+#    #+#             */
/*   Updated: 2024/12/13 18:19:03 by ilallali         ###   ########.fr       */
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
