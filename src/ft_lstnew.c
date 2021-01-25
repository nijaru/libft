#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size) {
  t_list *list;

  list = (t_list *)malloc(sizeof(t_list));
  if (!list) return (0);
  list->next = 0;
  if (!content) {
    list->content = 0;
    list->content_size = 0;
    return (list);
  }
  list->content = malloc(content_size);
  if (!list->content) {
    free(list);
    return (0);
  }
  ft_memcpy(list->content, content, content_size);
  list->content_size = content_size;
  return (list);
}
