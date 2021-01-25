#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len) {
  char *str;
  size_t i;

  if (!s) return (0);
  str = ft_strnew(len);
  if (!str) return (0);
  s = s + start;
  i = 0;
  while (i < len) {
    str[i] = s[i];
    i++;
  }
  return (str);
}
