#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
  t_list	*fresh;

  if (lst && f)
    {
      fresh = f(lst);
      if (fresh && fresh->next)
	  fresh->next = ft_lstmap(lst->next, f);
      return (fresh);
    }
  return (NULL);
}
