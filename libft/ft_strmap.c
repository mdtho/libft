/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:15:46 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/12 13:17:04 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		i;

	if (!(fresh = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s))
		fresh[i] = f(s[i]);
	fresh[i] = '\0';
	return (fresh);
}
