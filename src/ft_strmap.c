#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char)) {
  char *tmp;
  int i;

  i = 0;
  if (!s || !f) return (0);
  tmp = ft_strnew(ft_strlen(s));
  if (!tmp) return (0);
  while (s[i]) {
    tmp[i] = f(s[i]);
    i++;
  }
  return (tmp);
}
