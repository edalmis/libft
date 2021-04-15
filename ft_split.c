/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalmis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:26:42 by edalmis           #+#    #+#             */
/*   Updated: 2021/04/08 16:48:42 by edalmis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	size_t	word;
	size_t	i;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c)
			{
				i++;
				if (s[i] == '\0')
					return (word);
			}
		}
		i++;
	}
	return (word);
}

static int	check_border(char c, char d)
{
	if (c == d)
		return (1);
	return (0);
}

static size_t	len_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && !check_border(s[i], c))
		i++;
	return (i);
}

static char	*copywrd(char const *s, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(*dest) * n + 1);
	if (!dest)
		return (NULL);
	while (i < n)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	size;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (!check_border(s[i], c) && s[i])
		{
			size = len_word(&s[i], c);
			str[j++] = copywrd(&s[i], size);
			i += size;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}
