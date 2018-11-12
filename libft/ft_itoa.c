#include "libft.h" //not good version

char    *ft_itoa(int nbr)
{
  char *string;
  int len;
  int x;
  int sign;

  sign = 0;
  len = 0;
  if (nbr < 0)
    {
      sign = -1;
      nbr = -nbr;
      len++;
    }
  x = nbr;
  while (x)
    {
      x = x / 10;
      len++;
    }
  if (!(string = malloc(len + 1)))
    return (NULL);
  string[len + 1] = '\0';
  while (nbr)
    {
      string[len] = (nbr % 10) + '0';
      nbr = nbr / 10;
      len--;
    }
  if (sign == -1)
    string[len] = '-';
  return (string);
}
