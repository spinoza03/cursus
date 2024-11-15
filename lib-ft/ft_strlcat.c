/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:12:55 by ilallali          #+#    #+#             */
/*   Updated: 2024/11/15 17:07:21 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	srcl;
	size_t	destl;
	size_t	in;

	srcl = ft_strlen(src);
	destl = 0;
	in = 0;
	while (dst[destl] && destl < n)
		destl++;
	if (destl == n)
		return (n + srcl);
	while (src[in] && (destl + in) < (n - 1))
	{
		dst[destl + in] = src[in];
		in++;
	}
	dst[destl + in] = '\0';
	return (destl + srcl);
}
