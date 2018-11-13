/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:05:50 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/13 19:34:03 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ss;

	ss = (char*)s;
	if (*ss == '\0')
		return (0);
	while (n > 0 && *ss != c)
	{
		ss++;
		n--;
	}
	if (n != 0)
		return ((void*)ss);
	return (NULL);
}
