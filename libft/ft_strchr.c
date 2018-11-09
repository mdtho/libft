/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:52:28 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/08 15:23:51 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1);

char	*ft_strchr(const char *s, int c)
{
	char m;
	int i;
	char *copy;

	if (c == 0)
		return (0);
	copy = ft_strdup(s);
	m = c;
	i = -1;
	if (copy[0] == '\0')
		return (0);
	while (copy[++i] != '\0')
		if (copy[i] == m)
			return (&copy[i]);
	return (0);
}
