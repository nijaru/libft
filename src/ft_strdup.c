#include "libft.h"

char *ft_strdup(const char *s1) {
  size_t len;
  void *new;

  len = ft_strlen(s1) + 1;
  new = malloc(len);
  if (!new) return (0);
  return ((char *)ft_memcpy(new, s1, len));
}
