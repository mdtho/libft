/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:50:22 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/08 14:05:40 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	j = 0;
	if (dstsize > 0 && dst[i] == '\0')
		while (src[j] != '\0' && i < dstsize - 1)
			dst[i++] = src[j++];
	k = 0;
	while (src[j++] != '\0')
		k++;
	return (i + k);
}