/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalmis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:27:12 by edalmis           #+#    #+#             */
/*   Updated: 2021/04/12 13:01:33 by edalmis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *t, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	if (*t == '\0')
		return ((char *)s);
	i = 0;
	while (s[i] && i < n)
	{
		j = 0;
		while (s[i + j] && t[j]
			&& i + j < n && s[i + j] == t[j])
			j++;
		if (!t[j])
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
