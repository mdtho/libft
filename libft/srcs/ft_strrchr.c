/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:47:55 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/13 11:53:06 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	m;
	int		i;
	char	*copy;
	int		len;

	if (c == 0)
		return (0);
	copy = ft_strdup(s);
	m = c;
	i = -1;
	if (copy[0] == '\0')
		return (0);
	len = ft_strlen(copy);
	while (len >= 0)
	{
		if (copy[len] == m)
			return (&copy[len]);
		len--;
	}
	return (0);
}
