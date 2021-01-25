#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n) {
  char *dp;
  const char *sp;
  size_t i;

  i = -1;
  dp = (char *)dst;
  sp = (const char *)src;
  while (sp < dp && n--) dp[n] = sp[n];
  while (sp > dp && ++i < n) dp[i] = sp[i];
  return (dst);
}
