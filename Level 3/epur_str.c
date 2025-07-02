#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	t;

	if (ac == 2)
	{
		i = 0;
		j = 0;
		t = 1;
		//on parcours notre string
		while (av[1][i])
		{
			//on regarde si on croise un espace ou un tab
			//si oui on initialise t à 0
			if (av[1][i] == ' ' || av[1][i] == '\t')
				t = 0;
			//si on croise pas d'espace ou de tab on
			//initialise t à 1 et on affiche un espace
			else
			{
				if (t == 0 && j == 1)
					write(1, " ", 1);
				t = 1;
				j = 1;
				write(1, &av[1][i], 1);
			}
			i++;
	}
	write(1, "\n", 1);
}
