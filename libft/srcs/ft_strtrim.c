/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:50:44 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/13 10:54:43 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_getlen(char const *s)
{
	int i;
	int len;

	len = ft_strlen(s);
	i = 0;
	if (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
		while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
			i++;
	if (s[len - 1] == '\n' || s[len - 1] == '\t' || s[len - 1] == ' ')
	{
		len--;
		while (s[len] == '\n' || s[len] == ' ' || s[len] == '\t')
		{
			len--;
			i++;
		}
	}
	return (ft_strlen(s) - i);
}

char				*ft_strtrim(char const *s)
{
	char	*str;
	int		i;

	if (!(str = ft_strnew(ft_getlen(s) + 1)))
		return (NULL);
	i = 0;
	if (s[i] == '\n' || s[i] == ' ' || s[i] == 't')
	{
		while (s[i] == '\n' || s[i] == ' ' || s[i] == 't')
			i++;
	}
	return (ft_strsub(s, i, ft_getlen(s)));
}
