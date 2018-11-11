#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *fresh;
  unsigned int i;

  if (!(fresh = ft_strnew(ft_strlen(s))))
    return (NULL);
  i = -1;
  while (s[++i] != '\0')
    fresh[i] = f(i, s[i]);
  return (fresh);
}
