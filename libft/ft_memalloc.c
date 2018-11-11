#include "libft.h"

void	*ft_memalloc(size_t size)
{
  void *fresh;

  fresh = malloc(size);
  if (fresh == NULL)
    return (NULL);
  return (ft_memset(fresh, 0, size));
}
