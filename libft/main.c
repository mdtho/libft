#include "libft.h"
#include <stdio.h>

int	main(void)
{
  printf("%s%s\n", "memchr: ", memchr("abcdef", 999, 6));
  printf("%s%s\n", "ft_memchr: ", ft_memchr("abcdef", 999, 6));
  return (0);
}
