#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem)) {
  t_list *head;
  t_list *tmp;

  head = f(lst);
  tmp = head;
  while (lst->next) {
    lst = lst->next;
    tmp->next = f(lst);
    tmp = tmp->next;
  }
  return (head);
}
