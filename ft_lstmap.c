/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edalmis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:07:18 by edalmis           #+#    #+#             */
/*   Updated: 2021/04/12 17:31:27 by edalmis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*eptr;

	if (!lst || !f)
		return (NULL);
	ptr = NULL;
	while (lst)
	{
		eptr = ft_lstnew(f(lst -> content));
		if (!eptr)
		{
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		ft_lstadd_back(&ptr, eptr);
		lst = lst -> next;
	}
	return (ptr);
}
