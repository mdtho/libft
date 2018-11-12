#include "libft.h"

int	ft_nstrings(char const *s, char c)
{
  int i;
  int strings;

  strings = 0;
  i = 0;
  while (s[i] != '\0' && s[i] == c)
    i++;
  while (s[i] != '\0')
    {
      if (s[i] == c)
	{
	  while (s[i] == c)
	    i++;
	  strings++;
	}
      else
	i++;
    }
  if (s[i - 1] != c)
    strings++;
  return (strings);
}

char	**ft_strsplit(char const *s, char c)
{
  char **tab;
  int i;
  int j;
  int m;

  if (!s || !(tab = malloc(ft_nstrings(s, c) + 1)))
    return (NULL);
  i = 0;
  j = 0;
  while (s[i] != '\0' && s[i] == c)
    i++;
  while (s[i] != '\0')
    {
      if (s[i] == c)
	while (s[i] == c)
	  i++;
      else
	{
	  m = i;
	  while (s[i] != c && s[i] != '\0')
	    i++;
	  if (!(tab[j] = ft_strsub(s, m, i - m));
	      return (NULL);
	  tab[j][i - m] = '\0';
	  j++;
	}
    }
  tab[i] = 0;
  return (tab);
}
