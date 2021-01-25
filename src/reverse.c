#include "libft.h"

char *reverse(char *buf, int i, int j) {
  while (i < j) swap(&buf[i++], &buf[j--]);
  return (buf);
}
