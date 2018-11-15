/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:50:44 by mthoman           #+#    #+#             */
/*   Updated: 2018/11/15 14:27:48 by mthoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	t_list *tmp;
	t_list *head;

	if (new)
	{
		tmp = *alst;
		head = tmp;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		*alst = head;
	}
}
