#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n) {
  void *p;

  p = ft_memchr(src, c, n);
  if (p) return (ft_memcpy(dst, src, p - src + 1) + (p - src + 1));
  ft_memcpy(dst, src, n);
  return (0);
}
