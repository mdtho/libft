#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
  char *fresh;
  int i;

  if(!(fresh = ft_strnew(ft_strlen(s))))
    return (NULL);
  i = -1;
  while (++i < ft_strlen(s))
    fresh[i] = f(s[i]);
  fresh[i] = '\0';
  return (fresh);
}
