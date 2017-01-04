#include "libft/libft.h"
#include "fillit.h"

//mikael m envoi le tableau et un t_pice initialise a NULL

void	ft_add_piece_to_list(int *tab, t_piece *piece, t_piece **alst)
{
	static char c = 'A';

	piece = ft_lstnew2(tab, c);
	ft_lstadd2(alst, piece);
	c++;
}