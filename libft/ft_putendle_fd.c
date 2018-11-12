#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
  write(fd, &c, 1);
}

void	ft_putendle_fd(char const *c, int fd)
{
  int i;

  i = -1;
  while (c[++i] != '\0')
    ft_putchar_fd(c[i], fd);
  ft_putchar_fd('\n', fd);
}
