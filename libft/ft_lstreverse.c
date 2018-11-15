/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:49:44 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/15 15:45:43 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstreverse(t_list **alst)
{
	t_list *last;
	t_list *first;
	t_list *tmp;

	first = *alst;
	last = 0;
	while (first->next)
	{
		tmp = last;
		last = first;
		first = first->next;
		last->next = tmp;
	}
	*alst = last;
}
