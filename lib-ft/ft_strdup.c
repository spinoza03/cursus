/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:44:05 by ilallali          #+#    #+#             */
/*   Updated: 2024/11/07 16:41:23 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*str;

	size = ft_strlen(s);
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, size);
	str[size] = '\0';
	return (str);
}
