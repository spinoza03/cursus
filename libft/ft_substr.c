/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:01:37 by ilallali          #+#    #+#             */
/*   Updated: 2024/11/07 22:36:43 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  l;
    size_t  i;
    char    *sub;

    if (!s)  // Check for NULL input
        return (NULL);

    l = ft_strlen(s);  // Get the length of the string

    // If start is beyond the length of the string, return an empty string
    if (start >= l)
        return (ft_strdup(""));

    // If start + len exceeds string length, adjust len
    if (start + len > l)
        len = l - start;

    sub = (char *)malloc(len + 1);  // +1 for the null terminator
    if (!sub)
        return (NULL);

    // Copy characters into the substring
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }

    sub[i] = '\0';  // Null-terminate the substring
    return (sub);
}


