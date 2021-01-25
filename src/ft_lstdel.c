#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t)) {
  t_list *tmp;
  t_list *list;

  list = *alst;
  while (list) {
    tmp = list->next;
    ft_lstdelone(&list, del);
    list = tmp;
  }
  *alst = 0;
}
