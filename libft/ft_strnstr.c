/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:26:34 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/13 10:55:34 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1);

static char		*ft_assign(char *copy, const char *needle, size_t len)
{
	int i;
	int j;
	int m;
	int x;

	i = 0;
	while (copy[i] != '\0' && len > 0)
	{
		j = 0;
		m = i;
		x = len + 1;
		if (copy[i] == needle[j])
		{
			while (copy[i] == needle[j] && --x > 0)
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (&copy[m]);
		}
		i = m + 1;
		len--;
	}
	return (0);
}

char			*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*copy;

	if (!(copy = ft_strdup(haystack)))
		return (NULL);
	return (ft_assign(copy, needle, len));
}
