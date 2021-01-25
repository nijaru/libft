#include "libft.h"

int ft_atoi(const char *str) {
  int value;
  int sign;

  value = 0;
  sign = 1;
  while (whitespace(*str)) {
    ++str;
  }
  if (*str == '-') {
    sign = -1;
    ++str;
  } else if (*str == '+')
    ++str;
  while (*str && ft_isdigit(*str)) {
    value *= 10;
    value += (*str - '0');
    ++str;
  }
  return (value * sign);
}
