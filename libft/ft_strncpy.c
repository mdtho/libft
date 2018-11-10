char	*ft_strncpy(char *dst, const char *src, size_t len)
{
  if (dst == NULL || src == NULL)
    return (NULL);
  while (*src != '\0' && len > 0)
    {
      *dst++ = *src++;
      len--;
    }
  while (len > 0)
    {
      *dst = '\0';
      *dst++;
      len--;
    }
  return (dst);
}
