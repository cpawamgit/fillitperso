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


#include <stdio.h>
t_piece	*ft_lstadd2(t_piece *first, t_piece *new)
{
	t_piece *tmp;

	tmp = NULL;
	if (first == NULL)	
		return (new);
	else
	{
		tmp = first;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		return (first);
	}
}
