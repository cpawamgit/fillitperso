/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 23:23:54 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/22 23:23:57 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd2(t_piece **alst, t_list *new)
{
	t_piece *tmp;

	tmp = *alst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
