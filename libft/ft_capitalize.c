/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:56:20 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/15 16:22:50 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_capitalize(char *str)
{
	char	*copy;
	int		i;

	i = 0;
	if (!(str))
		return (NULL);
	copy = ft_strnew(ft_strlen(str));
	copy[i] = ft_toupper(str[i]);
	while (str[i])
	{
		if (ft_isalnum(str[i]) && (!(ft_isalnum(str[i - 1]))))
			copy[i] = ft_toupper(str[i]);
		else
			copy[i] = str[i];
	}
	return (copy);
}
