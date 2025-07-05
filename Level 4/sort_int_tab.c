void	sort_int_tab(int *tab, unsigned int size)
{
	int	tmp;
	unsigned int	i = 1;

	i = 1;
	if (size != 0)
	{
		while (a <= size)
		{
			if (tab[i] < tab[i - 1])
			{
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
				i = 0;
			}
			++i;
		}
	}
}
