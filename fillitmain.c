/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillitmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 18:48:09 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/12/12 18:48:12 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../2ndtrylibft/libft.h"
#include "fillit.h"

char	*ft_clean(char *str, char *buffer)
{
	int i;
	int j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * 17);
	if (!str)
		return (NULL);
	while (i < 16)
	{
		if (i > 0 && (i % 4) == 0)
			j++;
		str[i] = buffer[i + j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char **ft_initialize_tab(char** tab)
{
	int i;
	int j;

	i = 0;
	j = 2;
	tab = (char **)malloc(sizeof(char *) * 8);
	if (!tab)
		return (0);
	tab[7] = 0;
	while (tab[i] != 0)
	{
		tab[i] = (char *)malloc(sizeof(char) 9);
		if (!tab[i])
			return(0);
		ft_bzero(tab[i], 9);
		while (i < 3 && j < 6)
	}
}*/
/*
int	ft_isvalid(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{

	}

}
*/
int	main(int argc, char **argv)
{
	int fd;
	int i;
	char buffer[21];
	char **tab;

	i = 0;
	if (argc != 2)
		return (0);
	ft_memset(buffer, ' ', 21);
	fd = open(argv[1], O_RDONLY);
	while (read(fd, buffer, 21) != 0)
		i++;
	close(fd);
	tab = (char**)malloc(sizeof(char*) * i + 1);
	if (!tab)
			return (0);
		tab[i] = 0;
	fd = open(argv[1], O_RDONLY);
	i = 0;
	while (read(fd, buffer, 21) != 0)
	{
		tab[i] = ft_clean(tab[i], buffer);
		i++;
	}

	//partir non ecrite pour l'instant
	/*
	if (ft_isvalid(tab) != 1)
	{
		write(1, "error", 5);
		return (0)
	}
	*/
	//tests
	i = 0;
	while (tab[i])
	{
		printf("%s", tab[i]);
		i++;
	}

	return (0);
}
