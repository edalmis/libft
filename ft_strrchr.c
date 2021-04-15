/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalmis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:37:38 by edalmis           #+#    #+#             */
/*   Updated: 2021/04/08 16:47:40 by edalmis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*a;

	a = (unsigned char *)s;
	i = ft_strlen(s);
	while (i + 1 >= 0)
	{
		if (a[i] == (unsigned char)c)
			return ((char *)a + i);
		i--;
	}
	return (NULL);
}
