/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:00:50 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/25 17:00:52 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*t;

	t = s;
	i = 0;
	while (i < n)
	{
		t[i] = 0;
		i++;
	}
}
