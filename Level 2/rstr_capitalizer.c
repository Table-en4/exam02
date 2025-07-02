#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			//convertir minuscule en majuscule avec -32 rapppor a la table ascii
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
			//convertir majuscule en minuscule avec +32 rapport a la table ascii
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			//on affiche le resultats de la conversion
			write(1, av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
