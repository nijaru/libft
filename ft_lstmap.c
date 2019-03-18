/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrusso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:01:14 by nrusso            #+#    #+#             */
/*   Updated: 2018/08/27 20:17:27 by nrusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst)
		return (0);
	tmp = f(lst);
	head = ft_lstnew(tmp->content, f(tmp)->content_size);
	if (!head)
		return 0;

	while (lst->next)
	{
		lst = lst->next;
		ft_lstadd(head, f(lst));
	}
	return (head);
}
