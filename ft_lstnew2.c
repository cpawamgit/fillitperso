/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:39:33 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/19 15:39:35 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"
/*
t_piece	*ft_lstnew2(void const *content, size_t content_size, char c)
{
	t_piece	*new;
	void	*tmp;

	tmp = ((void *)content);
	new = NULL;
	new = (t_piece*)malloc(sizeof(t_piece));
	if (new)
	{
		if (tmp == NULL)
		{
			new->tab = NULL;
			new->next = NULL;
		}
		else
		{
			new->tab = (int *)malloc(sizeof(int) * content_size);
			if (!(new->tab))
				return (NULL);
			new->letter = c;
			ft_memcpy(new->tab, content, content_size);
			new->next = NULL;
		}
		return (new);
	}
	else
		return (NULL);
}
*/
t_piece *ft_lstnew2(int *tab, char c)
{
	t_piece *new;
	int i;

	i = 0;
	new = NULL;
	new = (t_piece*)malloc(sizeof(t_piece));
	if (!new)
		return (NULL);
	new->tab = (int *)malloc(sizeof(int) * 4);
	if (!new->tab)
		return (NULL);
	new->letter = c;
	while (i < 4)
	{
		new->tab[i] = tab[i];
		i++;
	}
	return (new);
}