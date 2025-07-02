#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		//on parcours toute la string
		while (av[1][i])
		{
			//si on croise un element compris entre a et m minuscule ou majuscule
			//on incrémente i 0 13 dans la table ascii
			if ((av[1][i] >= 'a' && av[1][i] <= 'm') || (av[1][i] >= 'A' && av[1][i] <= 'M'))
				av[1][i] += 13;
			//sinon si on croise un element compris entre m et z min ou maj
			//on décremente cette fois-ci de 13
			else if ((av[1][i] >= 'n' && av[1][i] <= 'z') || (av[1][i] >= 'N' && av[1][i] <= 'Z'))
				av[1][i] -= 13;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
