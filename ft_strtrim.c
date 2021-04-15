/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalmis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:27:37 by edalmis           #+#    #+#             */
/*   Updated: 2021/04/12 16:52:47 by edalmis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_finder(char a, char const *c)
{
	size_t	i;

	i = 0;
	while (c[i])
	{
		if (c[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*c;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1 || !set)
		return (NULL);
	j = 0;
	while (s1[j] && ft_char_finder(s1[j], set))
		j++;
	k = ft_strlen(s1);
	while (k > j && ft_char_finder(s1[k - 1], set))
		k--;
	c = (char *)malloc(sizeof(*s1) * (k - j + 1));
	if (!c)
		return (NULL);
	i = 0;
	while (j < k)
		c[i++] = s1[j++];
	c[i] = '\0';
	return (c);
}
