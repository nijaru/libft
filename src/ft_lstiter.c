#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *)) {
  while (lst) {
    f(lst);
    lst = lst->next;
  }
}
