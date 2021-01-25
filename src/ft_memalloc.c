#include "libft.h"

void *ft_memalloc(size_t size) {
  void *tmp;

  tmp = malloc(size);
  if (tmp == 0) return (0);
  return (ft_memset(tmp, 0, size));
}
