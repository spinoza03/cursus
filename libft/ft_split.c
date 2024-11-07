/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:02:08 by ilallali          #+#    #+#             */
/*   Updated: 2024/11/07 18:19:03 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delimiter(char c, char delim)
{
	return (c == delim);
}

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*allocate_word(const char *start, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	handle_memory(char **result, size_t i)
{
	while (i)
		free(result[--i]);
	free(result);
}

static void	handle_word(const char **s, char **result, size_t *i, char c)
{
	const char	*word_start;
	size_t		len;

	word_start = *s;
	len = 0;
	while (**s && !is_delimiter(**s, c))
	{
		len++;
		(*s)++;
	}
	result[*i] = allocate_word(word_start, len);
	if (!result[*i])
	{
		handle_memory(result, *i);
		return ;
	}
	(*i)++;
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	i;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (!is_delimiter(*s, c))
			handle_word(&s, result, &i, c);
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

// int main()
// {
//     char **result = ft_split(NULL, ' ');
//     for (int i = 0; result[i] != NULL; i++)
//     {
//         printf("result[%d] = %s\n", i, result[i]);
//         free(result[i]); // Free each substring
//     }
//     free(result); // Free the array of pointers
//     return 0;
// }
