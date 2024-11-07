/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:22:20 by ilallali          #+#    #+#             */
/*   Updated: 2024/11/07 22:49:05 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	if (c == '\0')
		return ((char*)&str[i]);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char*)&str[i]);
		i--;
	}
	return (NULL);
}
