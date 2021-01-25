
#include "libft.h"

char *ft_strncat(char *dst, const char *src, size_t n) {
  char *s;
  size_t slen;

  s = dst;
  dst += ft_strlen(dst);
  slen = ft_strnlen(src, n);
  dst[slen] = 0;
  ft_memcpy(dst, src, slen);
  return (s);
}
