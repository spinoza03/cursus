/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:15:21 by ilallali          #+#    #+#             */
/*   Updated: 2024/11/15 15:05:53 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;

	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (src[i] != dst[i])
			return (src[i] - dst[i]);
		i++;
	}
	return (0);
}
