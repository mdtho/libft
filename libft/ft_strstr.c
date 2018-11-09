/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:10:47 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/08 14:50:45 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strdup(const char *s1);

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int m;
	char *copy;

	i = 0;
	copy = ft_strdup(haystack);
	if (needle[0] == '\0')
		return (copy);
	while (copy[i] != '\0')
	{
		j = 0;
		m = i;
		if (copy[i] == needle[j])
		{
			while (copy[i] == needle[j])
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (&copy[m]);
		}
		i = m + 1;
	}
	return (0);
}
