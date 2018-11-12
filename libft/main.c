#include "libft.h"
#include <stdio.h>


int     ft_getlen(char const *s);
int	ft_nstrings(char const *s, char c);

int	main(void)
{
	
}
/*
STRSPLIT
{
  char const s[] = "salut*****les*etudiants";
  unsigned char c = '*';
  
  printf("%d\n", ft_nstrings(s, c));
  
  char **tab;
  int i;

  tab = ft_strsplit(s, c);
  i = 0;
  while (tab[i] != 0)
    {
      printf("%s\n", tab[i]);
      i++;
    }
    return (0);
}


STRTRIM
{
  char const s[] = "hello ";

  printf("%d\n", ft_getlen(s));
  printf("%s\n", ft_strtrim(s));
  printf("%zu\n", ft_strlen(ft_strtrim(s)));
  return (0);
}

MEMALLOC (but need to change it from 0 to see anything)
  printf("%s\n", ft_memalloc(5));
  return (0);
}

 MEMCHR
	char s[] = "hello";
	int c = 'l';
	size_t n = 4;

	printf("%s%s\n", "memchr: ", memchr(s, c, n));
	printf("%s%s\n", "ft_memchr: ", ft_memchr(s, c, n));
	return (0);
}


COMPARING MEMCPY & MEMMOVE
    char madeline[] = "madeline";
	char madeline2[] = "madeline";
	char madeline3[] = "madeline";
	char madeline4[] = "madeline";

    printf("%s%s\n", "memcpy: " , memcpy(madeline + 3, madeline, 4));
	printf("%s%s\n", "ft_memcpy: ", ft_memcpy(madeline2 + 3, madeline2, 4));
	printf("%s%s\n", "memmove: ", memmove(madeline3 + 3, madeline3, 4));
	printf("%s%s\n", "ft_memmove: ", ft_memmove(madeline4 + 3, madeline4, 4));
	return (0);
}
*/
/* 
// FT_MEMCPY
	char dst[] = "madeline";
	char src[] = "fdasjkl;";
	
	char dst2[] = "madeline";
	char src2[] = "fdasjkl;";

	printf("%s%s\n", "theirs:" , memcpy(dst, src, 20)); //if it goes beyond the length of src2, its an error
	printf("%s%s\n", "mine: ", ft_memcpy(dst2, src2, 20));
	return (0);
*/

/*
// FT_MEMCMP
	char	s1[] = "he";
	char	s2[] = "he";

	printf("%s%d\n", "theirs: ", memcmp(s1, s2, 1));
	printf("%s%d\n", "minee: ", ft_memcmp(s1, s2, 1));
	return (0);
*/
