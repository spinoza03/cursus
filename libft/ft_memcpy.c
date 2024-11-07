/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:19:47 by ilallali          #+#    #+#             */
/*   Updated: 2024/11/07 22:54:52 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*des;
	const unsigned char	*str;

	des = (unsigned char *)dst;
	str = (const unsigned char *)src;

	// Copy n bytes from src to dst
	i = 0;
	while (i < n)
	{
		des[i] = str[i];
		i++;
	}
	return (dst);
}

