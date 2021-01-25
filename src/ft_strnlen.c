#include <string.h>

size_t ft_strnlen(const char *s, size_t maxlen) {
  size_t len;

  len = 0;
  while (len < maxlen) {
    if (!*s) break;
    ++s;
    ++len;
  }
  return (len);
}
