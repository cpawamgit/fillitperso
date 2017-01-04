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

#include "libft/libft.h"
#include "fillit.h"

void	ft_lstadd2(t_piece **alst, t_piece *new)
{
	t_piece *tmp;

	tmp = *alst;
	new->next = tmp;
	*alst = new;
}
