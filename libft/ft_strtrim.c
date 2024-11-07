/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:27:32 by ilallali          #+#    #+#             */
/*   Updated: 2024/11/07 22:35:18 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check(char c, const char *set)
{
    while (*set)
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

static char *trimedone(const char *s1, size_t start, size_t end)
{
    char *trim;
    size_t i;

    trim = (char *)malloc(end - start + 2);  // +2 for null terminator
    if (!trim)
        return (NULL);
    
    i = 0;
    while (start <= end)
    {
        trim[i] = s1[start];
        i++;
        start++;
    }
    trim[i] = '\0';  // Null terminate the string
    return (trim);
}

char *ft_strtrim(const char *s1, const char *set)
{
    size_t start;
    size_t end;

    if (!s1)  // Null check for s1
        return (NULL);
    if (!set)  // If set is NULL, return a copy of s1
        return (ft_strdup(s1));

    if (*s1 == '\0')  // Handle the empty string case
        return (ft_strdup(""));

    start = 0;
    end = ft_strlen(s1) - 1;  // Adjust to point to last character

    // Skip characters from the start that are in the set
    while (s1[start] && check(s1[start], set))
        start++;

    // Skip characters from the end that are in the set
    while (end > start && check(s1[end], set))
        end--;

    return (trimedone(s1, start, end));
}

