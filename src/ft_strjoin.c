#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
  char *s;

  if (!s1 || !s2) return (0);
  s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
  if (s) {
    s = ft_strcpy(s, s1);
    s = ft_strcat(s, s2);
  }
  return (s);
}
