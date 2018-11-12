/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:30:57 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/12 16:49:49 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *dst2;
	char *src2;

	dst2 = (char*)dst;
	src2 = (char*)src;
	while (n > 0 && *src2 != c)
	{
		*dst2++ = *src2++;
		n--;
	}
	if (n > 0)
	{
		*dst2++ = *src2++;
		return (dst2);
	}
	return (NULL);
}
