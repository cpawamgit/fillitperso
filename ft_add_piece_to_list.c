#include "libft/libft.h"
#include "fillit.h"

//mikael m envoi le tableau et un t_pice initialise a NULL

t_piece	*ft_add_piece_to_list(int *tab, t_piece *piece, t_piece *first)
{
	static char c = 'A';

	piece = ft_lstnew2(tab, c);
	first = ft_lstadd2(first, piece);
	c++;
	return (first);
}