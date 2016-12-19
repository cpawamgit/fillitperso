# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_add_piece_to_list                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/19 19:09:25 by cyrmorin          #+#    #+#              #
#    Updated: 2016/12/19 19:09:32 by cyrmorin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "libft.h"
#include "fillit.h"

//mikael m envoi le tableau et un t_pice initialise a NULL

void	ft_add_piece_to_list(int *tab, t_piece piece)
{
	t_piece **alst;

	*alst = piece;
	if (*piece == NULL)
		piece == lstnew2(tab, 4);
		piece->next = NULL;
	else
		piece == lstnew2(tab, 4);
		ft_lstadd2(alst, piece);
}