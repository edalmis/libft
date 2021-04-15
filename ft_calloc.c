/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalmis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:57:38 by edalmis           #+#    #+#             */
/*   Updated: 2021/04/07 11:49:35 by edalmis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*c;
	size_t	total;

	total = nitems * size;
	c = (void *)malloc(nitems * size);
	if (!c)
		return (NULL);
	ft_memset(c, 0, total);
	return (c);
}
