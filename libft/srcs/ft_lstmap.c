/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mascagli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:01:36 by mascagli          #+#    #+#             */
/*   Updated: 2018/11/08 15:14:33 by mascagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *result;
	t_list *list;
	t_list *new;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	if (!(result = ft_lstnew(new->content, new->content_size)))
		return (NULL);
	lst = lst->next;
	list = result;
	while (lst)
	{
		new = f(lst);
		if (!(result->next = ft_lstnew(new->content, new->content_size)))
			return (NULL);
		result = result->next;
		lst = lst->next;
	}
	return (list);
}
