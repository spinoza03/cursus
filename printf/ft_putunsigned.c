/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:29:27 by ilallali          #+#    #+#             */
/*   Updated: 2024/12/06 19:45:26 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_putunsigned(nb / 10);
		count += ft_putchar((nb % 10) + '0');
	}
	else
	{
		count += ft_putchar(nb + '0');
	}
	return (count);
}
