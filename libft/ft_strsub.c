#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
  char *fresh;
  unsigned int i;

  if (!(fresh = ft_strnew(len)))
    return (NULL);
  i = -1;
  while (++i < len)
    fresh[i] = s[start + i];
  return (fresh);
}
