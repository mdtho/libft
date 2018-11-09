/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:08:29 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/08 16:21:09 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1);

int		ft_atoi(const char *str)
{
	char *copy;
	int sign;
	int newnumber;
	int i;

	copy = ft_strdup(str);
	newnumber = 0;
	i = 0;
	while (copy[i] == ' ' || ('\t' <= copy[i] && copy[i] <= '\r') || copy[i] > '~')
		i++;
	if (copy[i] == '-')
		sign = -1;
	if (copy[i] == '+' || copy[i] == '-')
		i++;
	if (copy[i] >= '0' && copy[i] <= '9')
	{
		while (copy[i] >= '0' && copy[i] <= '9')
		{
			newnumber = newnumber * 10 + (copy[i] - '0');
			i++;
		}
		return (newnumber * sign);
	}
	return (0);
}
