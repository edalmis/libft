/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalmis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:56:38 by edalmis           #+#    #+#             */
/*   Updated: 2021/04/05 17:22:24 by edalmis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*j;

	p = (unsigned char *)s1;
	j = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (p[i] == j[i] && i < n - 1)
		i++;
	return (p[i] - j[i]);
}
