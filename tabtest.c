void	ft_print(int *tab)
{
	int i;

	i = 0;
	while (i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

int main()
{
	int tab[4];
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;

	ft_print(tab);
	return (0);
}