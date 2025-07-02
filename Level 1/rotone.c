#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			//on va chercher tout les elements compris entre a et y
			//min et maj pour aller au prochain ellement de la table ascii
			if ((av[1][i] >= 'a' && av[1][i] <= 'y') || (av[1][i] >= 'A' && av[1][i] <= 'Y'))
				av[1][i] += 1;
			//si on croise un z on le convertie en a en decrementant
			//dans la table ascii
			else if (av[1][i] == 'Z' || av[1][i] == 'z')
				av[1][i] -= 25;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
