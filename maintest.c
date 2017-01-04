#include "libft/libft.h"
#include "fillit.h"

int main()
{
	t_piece *piece;
	t_piece **alst;
	t_piece *tmp;

	piece = NULL;
	alst = &piece;
	int tab[4];
	int i;

	i = 0;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	ft_add_piece_to_list(tab, piece, alst);
	tab[0] = 9;
	tab[1] = 9;
	tab[2] = 9;
	tab[3] = 9;
	ft_add_piece_to_list(tab, piece, alst);

	tab[0] = 78;
	tab[1] = 78;
	tab[2] = 78;
	tab[3] = 78;
	ft_add_piece_to_list(tab, piece, alst);
tmp = *alst;
while (tmp)
{
	printf("%c\n", tmp->letter);
	tmp = tmp->next;
}
	/*while (piece->next != NULL)
	{
		printf("un passage\n");
		piece = piece->next;
	}*/
	return (0);

}