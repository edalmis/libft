/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalmis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:33:38 by edalmis           #+#    #+#             */
/*   Updated: 2021/04/06 23:24:27 by edalmis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *c)
{
	char	*s;
	size_t	i;

	s = (char *)malloc(sizeof(*c) * ft_strlen(c) + 1);
	if (!s)
		return (NULL);
	i = 0;
	while (i < ft_strlen(c))
	{
		s[i] = c[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
