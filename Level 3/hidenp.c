#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (ac == 3)
	{
		//on parcours la premiere string
		while (av[1][i])
		{
			//on parcours la deuxieme string
			while (av[2][j])
			{
				//si dans la premiere string on croise
				//un ellement de la deuxieme string on
				//va alors incrémenter k et faire un break
				if (av[1][i] == av[2][j])
				{
					k++;
					break;
				}
				j++;
			}
			i++;
		}
		//une fois qu'on aura finis de parcourir nos string
		//on va verifier si k est egal a i si ils ont la meme valeur
		//alors on a trouvé le mot et on affiche 1
		//si non alors on a pas trouvé la string caché et on affiche 0;
		if (k == i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}
