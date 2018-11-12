#include "libft.h"

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
  unsigned int nbu;

  if (n < 0)
    {
      ft_putchar('-');
      n = -n;
    }
  nbu = n;
  if (nbu >= 10)
    {
      ft_putnbr(nbu / 10);
      ft_putnbr(nbu % 10);
    }
  if (nbu < 10)
    ft_putchar(nbu + '0');
}
