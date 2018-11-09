/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:26:34 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/08 15:34:01 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strdup(const char *s1);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	int m;
	char *copy;
	int x;

	i = 0;
	copy = ft_strdup(haystack);
	if (needle[0] == '\0')
		return (copy);
	while (copy[i] != '\0' && len > 0)
	{
		j = 0;
		m = i;
		x = len;
		if (copy[i] == needle[j])
		{
			while (copy[i] == needle[j] && x > 0)
			{
				i++;
				j++;
				x--;
			}
			if (needle[j] == '\0')
				return (&copy[m]);
		}
		i = m + 1;
		len--;
	}
	return (0);
}
