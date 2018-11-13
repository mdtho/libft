/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:13:26 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/13 12:04:12 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_getlen(int nbr)
{
	int len;
	int sign;

	sign = 0;
	len = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*string;
	int		sign;
	int		len;

	len = ft_getlen(n);
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	if (!(string = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(string, "-2147483648"));
	string[len] = '\0';
	while (n > 0)
	{
		string[--len] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign == -1)
		string[--len] = '-';
	return (string);
}
