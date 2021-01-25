#include "libft.h"

static char **arr_join(char **str, char *word) {
  char **old;
  char **new;
  int i;

  old = str;
  new = 0;
  i = 0;
  while (old[i]) i++;
  if ((new = (char **)malloc(sizeof(char *) * (i + 2)))) {
    i = -1;
    while (old[++i]) new[i] = old[i];
    new[i++] = word;
    new[i] = 0;
  }
  free(str);
  return (new);
}

static int wordlen(char const *str, char d) {
  int i;

  i = 0;
  while (str[i] && str[i] != d) ++i;
  return (i);
}

char **ft_strsplit(char const *s, char c) {
  char **n;
  int len;

  if (!s) return (0);
  n = (char **)malloc(sizeof(char *));
  if (!n) return (0);
  *n = 0;
  while (*s) {
    if (*s && *s != c) {
      len = wordlen(s, c);
      n = arr_join(n, ft_strsub(s, 0, len));
      s += len;
    } else
      s++;
  }
  return (n);
}
