/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:44:46 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/09 14:53:19 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*cast1;
	char	*cast2;

	cast1 = (char*)s1;
	cast2 = (char*)s2;
	while (*cast1 == *cast2 && n > 0)
	{
		cast1++;
		cast2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*cast1 - *cast2);
}
