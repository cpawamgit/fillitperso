/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:13:17 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/12/15 19:13:20 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"

typedef struct s_piece
{
	int	*tab;
	char	letter;
	struct s_piece *next;
}				t_piece;

t_piece	*ft_add_piece_to_list(int *tab, t_piece *piece, t_piece *first);
t_piece	*ft_lstadd2(t_piece *first, t_piece *new);
t_piece *ft_lstnew2(int *tab, char c);

#endif