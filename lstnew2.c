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

#include "libft.h"

t_piece	*ft_lstnew2(void const *content, size_t content_size)
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
			new->tab = (void *)malloc(sizeof(*content) * content_size);
			ft_memcpy(new->tab, content, content_size);
			new->next = NULL;
		}
		return (new);
	}
	else
		return (NULL);
}
