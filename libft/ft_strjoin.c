#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
  char *fresh;

  if (!s1 && !s2)
    return (NULL);
  else if (s1 == NULL)
    return (ft_strdup(s2));
  else if (s2 == NULL)
    return (ft_strdup(s1));
  if (!(fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
    return (NULL);
  while (*s1)
    *fresh++ = *s1++;
  while (*s2)
    *fresh++ = *s2++;
  *fresh = '\0';
  return (fresh);
}
