#include "libft.h"

int whitespace(char c) {
  if (c == 32 || c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f')
    return (1);
  return (0);
}
