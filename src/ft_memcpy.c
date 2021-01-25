#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n) {
  unsigned char *dp;
  const unsigned char *sp;

  if (dst == src) return (dst);
  dp = dst;
  sp = src;
  while (n--) *dp++ = *sp++;
  return (dst);
}
