#include "libft.h"

int	ft_getlen(char const *s)
{
  int i;
  int len;
  int j;

  len = ft_strlen(s);
  i = 0;
  while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
      i++;
  
}

char	*ft_strtrim(char const *s)
{
  char *str;
  if (!(str = ft_strnew(
}
