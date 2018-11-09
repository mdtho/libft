/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:55:21 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/08 14:47:38 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	char *copy;
	int i;

	if (!(copy = malloc(sizeof(*s1) * (ft_strlen(s1) + 1))))
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		copy[i] = s1[i];
	copy[i] = '\0';
	return (copy);
}
