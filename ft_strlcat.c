/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalmis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:55:53 by edalmis           #+#    #+#             */
/*   Updated: 2021/04/06 12:16:24 by edalmis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	t_length;
	size_t	c_length;

	c_length = ft_strlen(src);
	t_length = ft_strlen(dst);
	j = t_length;
	i = 0;
	if (t_length < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && t_length + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (t_length >= dstsize)
		t_length = dstsize;
	return (t_length + c_length);
}
