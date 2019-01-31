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

#   include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
    t_list		*head;
	t_list		*i;

	if (!lst)
		return (0);
    i = f(lst)
    head = i;
    while((lst = lst->next))
    {
        if(!(list->next = f(lst)))
        {
            free(list->next);
            return (0);
        }
        list = list->next;
    }
    return (head);
}
